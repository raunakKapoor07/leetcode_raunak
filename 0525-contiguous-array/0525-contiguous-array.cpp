class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int prefix=0;
        int maxlen=0;
        int n=nums.size();
        unordered_map<int,int> hash;
        hash[0]=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                prefix--;
            }
            else prefix++;
            if(!hash.count(prefix)){
                hash[prefix]=i;
            }
            if(hash[prefix]!=i){
                maxlen=max(maxlen,i-hash[prefix]);
            }
        }
        return maxlen;
    }
};
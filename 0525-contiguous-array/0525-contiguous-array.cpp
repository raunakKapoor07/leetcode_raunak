class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int prefix=0;
        int len=0;
        int maxlen=0;
        int n=nums.size();
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                prefix--;
            }
            else prefix++;
            if(!hash.count(prefix)){
                hash[prefix]=i;
            }
            len++;
            if(prefix==0){
                maxlen=max(len,maxlen);
            }
            else{
                if(hash[prefix]!=i){
                    maxlen=max(maxlen,i-hash[prefix]);
                }
            }
        }
        return maxlen;
    }
};
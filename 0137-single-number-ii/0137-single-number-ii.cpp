class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> binary(32,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<32;j++){
                binary[j]+=(nums[i]>>j) & 1;
            }
        }
        int ans=0;
        for(int i=0;i<32;i++){
            binary[i]=binary[i]%3;
            ans+=binary[i]*(1<<i);
        }
        return ans;
    }
};
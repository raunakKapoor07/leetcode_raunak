class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans=-1;
        if(nums[0]!=0){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                ans= ans&nums[i];
            }
        }
        return max(0,ans);
    }
};
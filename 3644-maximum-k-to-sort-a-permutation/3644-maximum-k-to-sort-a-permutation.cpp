class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        bool sorted=true;
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                ans= ans&nums[i];
                sorted=false;
            }
        }
        if(!sorted){
        return ans;
        }
        else{
            return 0;
        }
    }
};
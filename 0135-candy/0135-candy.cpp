class Solution {
public:
    int candy(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        for(int i=1;i<=n-1;i++){
            if(nums[i]>nums[i-1]){
                ans[i]=ans[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(nums[i]>nums[i+1] && ans[i]<=ans[i+1]){
                ans[i]=ans[i+1]+1;
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            count+=ans[i];
        }
        return count;
    }
};
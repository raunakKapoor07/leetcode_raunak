class Solution {
    void generate(vector<int>&nums, vector<vector<int>> &ans, vector<int> & temp, int i, int n){
        if(i>=n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        generate(nums,ans,temp,i+1,n);
        temp.pop_back();
        generate(nums,ans,temp,i+1,n);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        vector<vector<int>> ans;
        generate(nums,ans,temp,0,n);
        return ans;
    }
};
class Solution {
    void generate(vector<int>&nums, vector<vector<int>> &ans, vector<int> & temp, int i, int n){
        if(i>=n){
            auto it=find(ans.begin(),ans.end(),temp);
            if(it!=ans.end());
            else{
            ans.push_back(temp);
            }
            return;
        }
        temp.push_back(nums[i]);
        generate(nums,ans,temp,i+1,n);
        temp.pop_back();
        generate(nums,ans,temp,i+1,n);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        generate(nums,ans,temp,0,n);
        return ans;
    }
};
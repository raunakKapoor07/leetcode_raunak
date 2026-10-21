class Solution {
    void generate(vector<int> &nums,vector<int> &temp, vector<vector<int>> &ans,int n,int k,int target,int i,int sum){
        if(sum>target){
            return;
        }
        if(i>=n){
            if(sum==target && temp.size()==k){
                ans.push_back(temp);
            }
            return;
        }
        sum+=nums[i];
        temp.push_back(nums[i]);
        generate(nums,temp,ans,n,k,target,i+1,sum);
        sum-=nums[i];
        temp.pop_back();
        generate(nums,temp,ans,n,k,target,i+1,sum);
    }
public:
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<int> nums;
        for(int i=1;i<=9;i++){
            nums.push_back(i);
        }
        int sum=0;
        vector<vector<int>> ans;
        vector<int> temp;
        int n=nums.size();
        generate(nums,temp,ans,n,k,target,0,sum);
        return ans;
    }
};
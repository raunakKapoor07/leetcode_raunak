class Solution {
    void generate(vector<int>&candidates, int target, vector<vector<int>> &ans, vector<int> & temp, int i, int n,int s){
        if(s>target){
            return;
        }
        if(i>=n){
            if(s==target){
                ans.push_back(temp);
            }
            return;
        }
        s+=candidates[i];
        temp.push_back(candidates[i]);
        generate(candidates,target,ans,temp,i,n,s);
        s-=candidates[i];
        temp.pop_back();
        generate(candidates,target,ans,temp,i+1,n,s);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        int s=0;
        int i=0;
        generate(candidates,target,ans,temp,i,n,s);
        return ans;
    }
};
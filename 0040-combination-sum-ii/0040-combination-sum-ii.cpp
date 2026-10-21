class Solution {
    void generate(vector<int> & candidates, int target, vector<vector<int>> &ans, vector<int> &temp,int i,int n){
        if(target==0){
            ans.push_back(temp);
            return;
            }
        for(int j=i;j<n;j++){
            if(j>i && candidates[j]==candidates[j-1]){
                continue;
            }
            if (candidates[j]>target){
                break;
            }
        temp.push_back(candidates[j]);
        generate(candidates,target-candidates[j],ans,temp,j+1,n);
        temp.pop_back();
        }        
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n= candidates.size();
        sort(candidates.begin(),candidates.end());
        int i=0;
        vector<int> temp;
        vector<vector<int>> ans;
        generate(candidates,target,ans,temp,i,n);
        return ans;
    }
};
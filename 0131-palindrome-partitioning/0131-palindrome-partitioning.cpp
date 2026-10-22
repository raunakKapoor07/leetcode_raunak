class Solution {
    bool ispalindrome(string s){
        int n=s.size();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                return false;
            }
        }
        return true;
    }
    void genpalindrome(string &s, vector<vector<string>> &ans, int n,int i, vector<string> &temp){
        if(i>=n){
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<n;j++){
            if(ispalindrome(s.substr(i,j-i+1))){
                temp.push_back(s.substr(i,j-i+1));
                genpalindrome(s,ans,n,j+1,temp);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<vector<string>> ans;
        vector<string> temp;
        genpalindrome(s,ans,n,0,temp);
        return ans;
    }
};
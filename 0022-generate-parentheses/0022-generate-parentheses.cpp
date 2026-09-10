class Solution {
    void generate(int open,int close,int n,string temp,vector<string>& ans){
        if(open==n && close==n){
            ans.push_back(temp);
            return;
        }
        if(open<n){
            temp.push_back('(');
            generate(open+1,close,n,temp,ans);
            temp.pop_back();
        }
        if(close<open){
            temp.push_back(')');
            generate(open,close+1,n,temp,ans);
            temp.pop_back();
        }
        return;
    }
public:
    vector<string> generateParenthesis(int n) {
        string temp="";
        vector<string> ans;
        generate(0,0,n,temp,ans);
        return ans;
    }
};
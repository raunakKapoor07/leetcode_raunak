class Solution {
    bool check(string& s, int i, int n){
        if(i>=n-i-1){
            return true;
        }
        else if(s[i]==s[n-i-1]){
            return check(s,i+1,n);
        }
        else{
            return false;
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                ans+=toupper(s[i]);
            }
        }
        cout<<ans;
        int m=ans.size();
        return check(ans,0,m);
    }
};
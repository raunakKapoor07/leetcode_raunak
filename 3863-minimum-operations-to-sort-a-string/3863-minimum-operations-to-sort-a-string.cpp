class Solution {
public:
    int minOperations(string s) {
        string temp=s;
        sort(temp.begin(),temp.end());
        int n=s.size();
        char mn=temp[0];
        char mx=temp[n-1];
        if(temp==s){
            return 0;
        }
        if(n==2 && s[0]>s[1]){
            return -1;
        }
        if(s[0]==mn || s[n-1]==mx){
            return 1;
        }
        for(int i=1;i<n-1;i++){
        if(s[i]==mx || s[i]==mn){
            return 2;
            }
        }
        return 3;
    }
};
class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int count=0;
        int maxcount=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')'){
                count++;
            }
            else if(s[i]=='('){
                maxcount=max(count,maxcount);
                count--;
            }
            else{
                continue;
            }
        }
        return maxcount;
    }
};
class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }
        string ans="11";
        for(int i=2;i<n;i++){
            int len=ans.size();
            string temp="";
            int count=1;
            for(int j=0;j<len;j++){
                string c;
                 if(ans[j]==ans[j+1]){
                    count++;
                }
                else{
                c=to_string(count);
                temp+=c;
                temp+=ans[j];
                count=1;
                }
            }
            ans=temp;
        }
        return ans;
    }
};
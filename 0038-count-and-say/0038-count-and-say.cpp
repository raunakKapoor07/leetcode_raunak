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
            for(int j=0;j<len;j++){
                int count=1;
                string c;
                while(ans[j]==ans[j+1] && j<len){
                    count++;
                    j++;
                }
                c=to_string(count);
                temp+=c;
                temp+=ans[j];
            }
            ans=temp;
        }
        return ans;
    }
};
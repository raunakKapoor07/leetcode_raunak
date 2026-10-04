class Solution {
public:
    bool checkValidString(string s) {
        int minopen=0;
        int maxopen=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                minopen++;
                maxopen++;
            }
            else if(s[i]==')'){
                minopen--;
                maxopen--;
            }
            else{
                minopen--;
                maxopen++;
            }
            if(maxopen<0){
                return false;
            }
            if(minopen<0) minopen=0;
        }
        return minopen==0;
    }
};
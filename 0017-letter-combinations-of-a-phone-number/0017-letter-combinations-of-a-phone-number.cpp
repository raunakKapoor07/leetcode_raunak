class Solution {
    void generate(string &digits, map<char,vector<char>> &mpp, vector<string> &ans,string &temp, int i, int n){
        if(i>=n){
            ans.push_back(temp);
            return; 
        }
        int pos=mpp[digits[i]].size();
        for(int j=0;j<pos;j++){
        temp.push_back(mpp[digits[i]][j]);
        generate(digits,mpp,ans,temp,i+1,n);
        temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits==""|| digits=="1"){
            return {};
        }
        vector<string> ans;
        string temp="";
        int n=digits.size();
        map<char,vector<char>> mpp;
        mpp['1']={};
        mpp['2']={'a','b','c'};
        mpp['3']={'d','e','f'};
        mpp['4']={'g','h','i'};
        mpp['5']={'j','k','l'};
        mpp['6']={'m','n','o'};
        mpp['7']={'p','q','r','s'};
        mpp['8']={'t','u','v'};
        mpp['9']={'w','x','y','z'};
        generate(digits,mpp,ans,temp,0,n);
        return ans;
    }
};
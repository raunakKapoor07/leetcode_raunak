class Solution {
    void generate(int i,int j,int n,int m, int len,string &word, vector<vector<char>> &board, string &temp,string & ans,map<pair<int,int>,int> &visited,int count){
        if(temp.size()>=len){
            if(temp==word){
                ans=temp;
            }
            return;
        }
        if(i<0 || j<0) return;
        if(i<n && i>=0 && j<m && j>=0 && board[i][j]==word[count]){
            if(visited[{i,j}]==0){
                count++;
            temp.push_back(board[i][j]);
            visited[{i,j}]=1;
            generate(i+1,j,n,m,len,word,board,temp,ans,visited,count);
            temp.pop_back();
            temp.push_back(board[i][j]);
            visited[{i,j}]=1;
            generate(i-1,j,n,m,len,word,board,temp,ans,visited,count);
            temp.pop_back();
            temp.push_back(board[i][j]);
            visited[{i,j}]=1;
            generate(i,j+1,n,m,len,word,board,temp,ans,visited,count);
            temp.pop_back();
            temp.push_back(board[i][j]);
            visited[{i,j}]=1;
            generate(i,j-1,n,m,len,word,board,temp,ans,visited,count);
            temp.pop_back();
            visited[{i,j}]=0;
            }
        }
        return;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        int len=word.size();
        if(n*m<len){
            return false;
        }
        string temp="";
        string ans="";
        int count=0;
        for(int i=0;i<n;i++){
            map<pair<int,int>,int> visited;
            for(int j=0;j<m;j++){
        generate(i,j,n,m,len,word,board,temp,ans,visited,count);
            }
        }
        if(ans==word){
            return true;
        }
        else return false;
    }
};
class Solution {
    bool dfs(int i,int j,vector<vector<char>>& board, string &word,int cnt){
         if(cnt==word.size()) return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='*' || board[i][j]!=word[cnt]){
            return false;
        }
        char temp=board[i][j];
         board[i][j]='*';
         bool isfound = dfs(i+1, j, board, word, cnt + 1) ||
                       dfs(i-1, j, board, word, cnt + 1) ||
                       dfs(i, j+1, board, word, cnt + 1) ||
                       dfs(i, j-1, board, word, cnt + 1);
        board[i][j]=temp;
        return isfound;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] && dfs(i,j,board,word,0)){
                    return true;
                }
            }
        }
        return false;
        
    }
};

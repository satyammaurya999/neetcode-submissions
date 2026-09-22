class Solution {
    bool traversebox(vector<vector<char>>& board,int sr,int er,int sc,int ec){
        set<int>st;
        for(int i=sr;i<er;i++){
            for(int j=sc;j<ec;j++){
                if (board[i][j] == '.') {
                    continue;
                }

                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     //for Row 
     for(int row=0;row<9;row++){
        set<int>st;
        for(int col=0;col<9;col++){
            if (board[row][col] == '.') {
                    continue;
                }

            if(st.find(board[row][col])!=st.end()){
                return false;
            }
            st.insert(board[row][col]);
        }
     }
     //col check
     for(int col=0;col<9;col++){
        set<int>st;
        for(int row=0;row<9;row++){
            if (board[row][col] == '.') {
                    continue;
                }

            if(st.find(board[row][col])!=st.end()){
                return false;
            }
            st.insert(board[row][col]);

        }
     }
     //3X3 box;
    
     for (int sr = 0; sr < 9; sr += 3) {
            for (int sc = 0; sc < 9; sc += 3) {

                if (!traversebox(board, sr, sr + 3, sc, sc + 3)) {
                    return false;
                }
            }
        }
     return true;
        
    }
};

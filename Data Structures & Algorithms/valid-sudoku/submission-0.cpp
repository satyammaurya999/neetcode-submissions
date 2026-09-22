class Solution {
    bool traversebox(vector<vector<char>>& board,int sr,int er,int sc,int ec){
        set<int>st;
        for(int i=sr;i<er;i++){
            for(int j=sc;j<ec;j++){
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
            if(st.find(board[col][row])!=st.end()){
                return false;
            }
            st.insert(board[row][col]);

        }
     }
     //3X3 box;
     int sr=0;
     int sc=0;
     int er=0;
     int ec=0;
     for(int i=sr;i<9;i+=3){
        er+=2;
        for(int j=sc;j<9;j++){
            ec+=2;
            if(traversebox(board,sr,er,sc,ec)==false){
                return false;
            }
        }

     }
     return true;
        
    }
};

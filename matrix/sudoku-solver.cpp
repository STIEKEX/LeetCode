class Solution {
public:
    bool isValid(int i , int j , char ch , vector<vector<char>>&board){

        for(int k = 0 ; k<9 ; k++){

            if(board[i][k] == ch) return false ;
        }

        for(int k = 0 ; k<9 ; k++){

            if(board[k][j] == ch) return false ;
        }

        int row = (i/3)*3 ; 
        int col = (j/3)*3 ; 

        for(int x = row ; x<row+3 ; x++){

            for(int y = col ; y<col+3 ; y++){

                if(board[x][y] == ch) return false; 
            }
        }
        return true ;
    }
    bool solve(vector<vector<char>>&board){

        for(int i = 0; i<9 ; i++){

            for(int j = 0 ; j<9 ; j++){

                if(board[i][j] == '.'){

                    for(char ch = '1' ; ch<='9' ; ch++){

                        if(isValid(i ,j , ch , board )){
                            board[i][j] = ch ; 

                            if(solve(board)){
                                return true ;
                            }
                            board[i][j] = '.' ; 
                        }
                    }
                    return false ;   
                }
            }
        }
        return true ; 
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board) ; 
        
    }
};
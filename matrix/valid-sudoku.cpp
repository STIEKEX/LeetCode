class Solution {
public:
    bool solve(int I , int J, int m , vector<vector<char>>&board , char val ){
        
        for(int k = 0 ; k<m ; k++){

            if(board[I][k] == val && k != J) return false; 
        }

        for(int k = 0 ; k<m ; k++){
            if(board[k][J] == val && k != I) return false; 
        }

        
        int r = (I/3)*3 ; 
        int c = (J/3)*3 ; 

        for(int i = r ; i<r+3 ; i++){

            for(int j = c ; j<c+3 ; j++){

                if(board[i][j] == val && i != I && j != J) return false; 
            }
        }

       return true ;
        
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int m = 9 ; 
        


        for(int i = 0  ; i<m ; i++){
            
            for(int j = 0 ; j<m ; j++){
                if(board[i][j] != '.'){
                    
                    if(!solve(i , j , m , board , board[i][j]  )){
                        return false ;
                    }
                }
            }
        }
        return true ;
        
    }
};
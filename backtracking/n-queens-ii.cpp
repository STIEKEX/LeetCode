class Solution {
public:
    bool isSafe(int row , int col , vector<string>&board , int n ){

        for(int i = 0 ; i<n ; i++){
            if(board[row][i] == 'Q') return false ;
        }

        for(int i = 0 ; i<n ; i++){
            if(board[i][col] == 'Q') return false ;
        
        }

        // right diagonal : 

        for(int i = row , j = col ; i>=0 && j>=0 ; i-- , j--){

            if(board[i][j] == 'Q') return false; 
        }

        // left ; 

        for(int i = row , j = col ; j <n && i>=0 ; j++ , i--){
            if(board[i][j] == 'Q') return false; 
        }
        return true ; 
    }
    void solve(vector<string>&board , vector<vector<string>>&ans , int n , int row){
        if(row == n){
            ans.push_back(board) ; 
            return ; 
        }

        for(int i = 0 ; i<n ; i++){

            if(isSafe(row , i , board , n)){
                board[row][i] = 'Q' ; 
                solve(board , ans , n , row+1) ; 
                board[row][i] = '.' ; 
            }
        }
    }
    int totalNQueens(int n) {
        vector<string>board(n , string(n , '.')) ; 
        vector<vector<string>>ans ; 
        int row = 0 ;
        solve(board , ans , n ,row );

        return ans.size() ;
        
    }
};
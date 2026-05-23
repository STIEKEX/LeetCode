class Solution {
public:
        

        void dfsp(int i , int j , int m , int n , vector<vector<int>>&grid , vector<vector<bool>>&seenP,vector<vector<bool>>&p){

            if(i < 0 || j < 0 || i>=m || j >= n || seenP[i][j]) return ; 

            p[i][j] = true ; 
            seenP[i][j] = true ;

            if(i+1 < m  && grid[i][j] <= grid[i+1][j] && !p[i+1][j]){
                dfsp(i+1 , j , m , n , grid ,seenP , p) ;
            }

            if(i-1 >= 0  && grid[i][j] <= grid[i-1][j] && !p[i-1][j]){
                dfsp(i-1 , j , m , n , grid ,seenP , p) ;
            }

            if(j-1 >= 0 && grid[i][j] <= grid[i][j-1] && !p[i][j-1]){
                dfsp(i , j-1 , m , n , grid ,seenP , p) ;
            }

            if(j+1 < n && grid[i][j] <= grid[i][j+1] && !p[i][j+1]){
                dfsp(i , j+1 , m , n , grid ,seenP , p) ;
            }




        }



        void dfsa(int i , int j , int m , int n , vector<vector<int>>&grid , vector<vector<bool>>&seenA,vector<vector<bool>>&a){

            if(i < 0 || j < 0 || i>=m || j >= n || seenA[i][j]) return ; 

            a[i][j] = true ; 
            seenA[i][j] = true ;

            if(i+1 < m  && grid[i][j] <= grid[i+1][j] && !a[i+1][j]){
                dfsa(i+1 , j , m , n , grid ,seenA , a) ;
            }

            if( i-1 >= 0   && grid[i][j] <= grid[i-1][j] && !a[i-1][j]){
                dfsa(i-1 , j , m , n , grid ,seenA , a) ;
            }

            if(j-1 >= 0 && grid[i][j] <= grid[i][j-1] && !a[i][j-1]){
                dfsa(i , j-1 , m , n , grid ,seenA , a) ;
            }

            if(j+1 < n  && grid[i][j] <= grid[i][j+1] && !a[i][j+1]){
                dfsa(i , j+1 , m , n , grid ,seenA , a) ;
            }




        }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& grid) {
        int m = grid.size() ; 
        int  n = grid[0].size() ; 
        vector<vector<bool>>p(m , vector<bool>(n ,false)) ; 
        vector<vector<bool>>a(m , vector<bool>(n ,false)) ;


        vector<vector<bool>>seenP(m , vector<bool>(n ,false)) ;
        vector<vector<bool>>seenA(m , vector<bool>(n ,false)) ;

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(i == 0 || j == 0){
                    dfsp(i , j , m , n ,grid,  seenP , p);
                }
            }
        }

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(i == m-1 || j == n-1){
                    dfsa(i , j , m , n ,grid , seenA ,a) ;
                }
            }
        }

        vector<vector<int>>ans ; 

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(p[i][j] &&a[i][j] ){
                    ans.push_back({i , j}) ;
                }
            }
        }
        return ans ;
        
    }
};
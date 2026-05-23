class Solution {
public:
       

        bool find(int i , int j , int m , int n ,vector<vector<int>>&grid1 , vector<vector<bool>>&seen , vector<vector<int>>&grid2){
            if(i < 0 || j < 0 || i >= m || j >= n || grid2[i][j] != 1 || seen[i][j]) return true; 
            seen[i][j] = true ;
            // subIsland.push_back({i,j}) ;
            bool subIsland = (grid1[i][j] == 1) ; 

            bool top = find(i+1 , j , m , n , grid1 , seen , grid2) ;
            bool bottom= find(i-1 , j , m , n , grid1 , seen , grid2) ;
            bool left = find(i , j+1 , m , n , grid1 , seen , grid2) ;
            bool right = find(i , j-1 , m , n , grid1 , seen , grid2) ;
            
            return subIsland &&top && bottom && left && right ;
        }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
            int m = grid1.size() ; 
            int n = grid1[0].size() ; 
            vector<vector<bool>>seen(m , vector<bool>(n , false)) ;
           
           int count = 0 ;

           for(int i = 0 ; i<m ; i++){
                for(int j = 0 ; j<n  ;j++){
                    if(grid2[i][j] == 1 && !seen[i][j]){
                        if(find(i , j , m  , n , grid1 , seen , grid2)) count++ ;
                        
                    }
                }
           }
           return count ;



    }
};
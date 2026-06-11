class Solution {
public:
    
    int dfs(int i ,int j , int m , int n ,vector<vector<char>>&maze,  int I , int J  , vector<vector<bool>>&seen , int count){

        if( i < 0 || j < 0 || i >= m || j >= n  || maze[i][j] == '+' || seen[i][j]) return 1e9 ; 

        if(i == 0 || j == 0 || i == m-1 || j == n-1){
           if(i != I || j != J){
             
            return 0; 
           }
        }

        seen[i][j] = true ; 
        int down = 1 + dfs(i+1 , j , m , n , maze , I , J , seen , count+1) ;
        int top = 1 +  dfs(i-1 , j , m , n , maze , I , J , seen , count + 1) ; 
       int left =  1 + dfs(i , j+1 , m , n ,  maze , I , J , seen , count + 1 ) ; 
       int right = 1 +  dfs(i , j-1 , m , n , maze , I , J  , seen , count + 1) ; 
       seen[i][j] = false ; 
        return min({top , down , left , right}) ; 

      
    }
    int nearestExit(vector<vector<char>>& maze, vector<int>& e) {

        int m = maze.size() ; 
        int n = maze[0].size() ; 

        int srcI = e[0] ; 
        int srcJ = e[1] ; 
        int count = 0 ;
        vector<vector<bool>>seen(m , vector<bool>(n , false)) ;
       int ans =  dfs(srcI , srcJ , m , n , maze , srcI , srcJ ,seen , count) ;

       if(ans >= 1e9) return -1 ; 
       return ans ; 
       




        
    }
};
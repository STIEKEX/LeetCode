class Solution {
public:
        queue<pair<pair<int ,int> , int >>q ;
        void dfs(int i , int j , int m , int n , vector<vector<int>>&grid , vector<vector<bool>>&seen){
            if(i < 0 || j < 0 || i>=m || j>=n || grid[i][j] != 1 || seen[i][j]) return ; 

            seen[i][j] = true ;
            q.push({{i , j} , 0}) ;

            dfs(i-1 , j , m , n , grid , seen) ; 
            dfs(i+1 , j , m , n , grid, seen) ;
            dfs(i , j-1 , m , n , grid ,seen) ; 
            dfs(i , j+1 , m , n , grid ,seen) ; 
        }
        int ans = 0 ;

        // void bfs(int i , int j , int m , vector<vector<int>>&grid , vector<vector<bool>>&seen){

        //     queue<pair<pair<int ,int > , int>>q ;
        //     q.push({{i , j}, 0}) ; 
        //     seen[i][j] = true ; 

        //     while(q.size() > 0){
        //         int i = q.front().first.first ;
        //         int j = q.front().first.second ; 
        //         int dis = q.front().second ;
        //         ans = max(dis , ans) ; 
                
        //         q.pop() ; 

        //         if(i-1 >= 0 && grid[i-1][j] == 0 && !seen[i-1][j]){
        //             seen[i-1][j] = true ;
        //             q.push({{i-1, j} , dis+1}) ;
        //         }

        //          if(i+1 < m && grid[i+1][j] == 0 && !seen[i+1][j]){
        //             seen[i+1][j] = true ;
        //             q.push({{i+1, j} , dis+1}) ;
        //         }

        //          if(j-1 >= 0 && grid[i][j-1] == 0 && !seen[i][j-1]){
        //             seen[i][j-1] = true ;
        //             q.push({{i, j-1} , dis+1}) ;
        //         }


        //          if(j+1 < m && grid[i][j+1] == 0 && !seen[i][j+1]){
        //             seen[i][j+1] = true ;
        //             q.push({{i, j+1} , dis+1}) ;
        //         }
        //     }
        // }
    int shortestBridge(vector<vector<int>>& grid) {
        int m = grid.size()  ;
        int n = grid[0].size() ;
        vector<vector<bool>>seen(m , vector<bool>(n , false)) ; 

        int i = 0  , j = 0 ; 
        bool isfound = false ;
        for(i = 0 ; i<m&& !isfound ; i++){
            for(j = 0 ; j<n ; j++){
                if(grid[i][j] == 1 ){
                    dfs(i , j , m , n , grid , seen) ;
                    isfound = true ;
                    break ;
                }
            }
        }

        int ans = 0 ; 
        while(q.size() > 0){
            int i = q.front().first.first ; 
            int j = q.front().first.second ; 

            int time = q.front().second ; 
            // ans = time ;
            q.pop() ; 

            // if(grid[i][j] == 1 && !seen[i][j]) return ans  ;

            if(i-1>=0 && !seen[i-1][j] ){
                if(grid[i-1][j] == 1) return time ;
                q.push({{i-1, j} , time+1}) ;
                seen[i-1][j] = true ;
            }

            if(i+1 < m && !seen[i+1][j] ){
                if(grid[i+1][j] == 1) return time ;
                q.push({{i+1,j} , time+1}) ;
                seen[i+1][j] = true ;
            }

            if(j-1 >=0 && !seen[i][j-1] ){
                if(grid[i][j-1] == 1) return time ;
                q.push({{i,j-1} , time+1}) ;
                seen[i][j-1] = true ;
            }

            if( j+ 1 <  n&& !seen[i][j+1] ){
                if(grid[i][j+1] == 1) return time ;
                q.push({{i,j+1} , time+1}) ;
                seen[i][j+1] = true ;
            }
        }
        return -1 ;

        





        
    }
};
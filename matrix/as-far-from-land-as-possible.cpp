class Solution {
public:
        // int bfs(int i , int j , int n , vector<vector<int>>& grid , vector<vector<bool>>& seen){
        //     if(i<0 || j < 0 || i+1 > m || j+1 > m || seen[i][j] || grid[i][j] == 0) return 0 ; 

        //     queue<pair<int ,int>>q ; 
        //     q.push()

        // }
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size() ; 

        vector<vector<bool>>seen(n , vector<bool>(n , false)) ; 

        queue<pair<pair<int ,int> , int>>q ;  
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){

                if(grid[i][j] == 1){
                    q.push({{i , j } , 0}) ;
                }

            }
        }
        int ans = -1 ;
        while(q.size() > 0){
            int i = q.front().first.first ; 
            int j = q.front().first.second ; 
            int dis = q.front().second ;
            q.pop() ; 
            ans = max(ans , dis) ;


            if(i+1 < n && grid[i+1][j] == 0 && !seen[i+1][j] ){
                seen[i+1][j] = true ;
                q.push({{i+1 , j} , dis+1}) ;
            }
             if(j+1 < n && grid[i][j+1] == 0 && !seen[i][j+1] ){
                seen[i][j+1] = true ;
                q.push({{i, j+1} , dis+1}) ;
            }
             if(i-1 >=0 && grid[i-1][j] == 0 && !seen[i-1][j] ){
                seen[i-1][j] = true ;
                q.push({{i-1 , j} , dis+1}) ;
            }
             if(j-1 >= 0 && grid[i][j-1] == 0 && !seen[i][j-1] ){
                seen[i][j-1] = true ;
                q.push({{i , j-1} , dis+1}) ;
            }
        }
        if(ans == 0) return -1 ;
        return ans ;

        
        


        
    }
};
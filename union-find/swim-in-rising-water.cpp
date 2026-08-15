class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size() ; 




       priority_queue< pair<int ,pair<int ,int>> , vector<pair< int , pair<int ,int>>> , greater<pair< int , pair<int ,int>>>>q ; 
       q.push({0 , {0 , 0}}) ; 

       vector<vector<bool>>seen(n , vector<bool>(n ,false)) ; 

       seen[0][0] = true  ;

       while(q.size()){

            int cnt = q.top().first ; 
            int i = q.top().second.first ; 
            int j = q.top().second.second ; 
            q.pop() ; 

            if(i == n-1 && j == n-1) return cnt ;

            if(i+1 < n && !seen[i+1][j]){
                int val = max(cnt , grid[i+1][j]) ; 
                q.push({val , {i+1 , j}});
                seen[i+1][j] = true ;
            }

            if(i-1 >=0 && !seen[i-1][j]){
                int val = max(cnt , grid[i-1][j]) ; 
                q.push({val, {i-1 , j}}) ; 
                seen[i-1][j] = true ;
            }

             if(j+1 <n && !seen[i][j+1]){
                int val = max(cnt , grid[i][j+1]) ; 
                q.push({val, {i , j+1}}) ; 
                seen[i][j+1] = true ;
            }

             if(j-1 >=0 && !seen[i][j-1]){
                int val = max(cnt , grid[i][j-1]) ; 
                q.push({val , {i , j-1}}) ; 
                seen[i][j-1] = true ;
            }

       }
       return -1 ; 
        
    }
};
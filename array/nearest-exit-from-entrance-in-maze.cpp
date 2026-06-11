class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& e) {

        int m = maze.size() ; 
        int n = maze[0].size() ; 


        int i = e[0] ; 
        int j = e[1] ; 


        queue<pair<pair<int ,int> , int>>q ; 
        vector<vector<bool>>seen(m , vector<bool>(n , false)) ; 

        q.push({{i , j } , 0}) ; 

        seen[i][j] = true ; 

        while(!q.empty()){

            int i = q.front().first.first;  
            int j = q.front().first.second ; 
            int dis = q.front().second ;
            q.pop() ; 
            seen[i][j] = true ; 
            if(i == 0 || j == 0 || i == m-1 || j == n-1 ){
                if(i != e[0] || j != e[1]) {
                    return dis ; 
                }

            }

            if(i+1 < m && seen[i+1][j] != true && maze[i+1][j] != '+'){
                q.push({{i+1 , j} , dis+1}) ; 
            }
            if(j+1 < n  && seen[i][j+1] != true && maze[i][j+1] != '+'){
                q.push({{i , j+1} , dis+1}) ; 
            }
            if(i-1 >= 0 && seen[i-1][j] != true && maze[i-1][j] != '+'){
                q.push({{i-1 , j} , dis+1}) ; 
            }
            if(j-1 >= 0 && seen[i][j-1] != true && maze[i][j-1] != '+'){
                q.push({{i, j-1} , dis+1}) ; 
            }

        }
        return -1 ; 
        
    }
};
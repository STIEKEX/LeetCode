class Solution {
public:
    int bfs(int i , int j , int m , int n , vector<vector<int>>&f , int I , int J){

        queue<pair< pair<int , int> , int >>q ; 
        vector<vector<bool>>seen(m , vector<bool>(n ,false)) ; 


        q.push({{i , j} , 0}) ; 
        seen[i][j] = true ; 

        while(!q.empty()){

            int i = q.front().first.first ; 
            int j = q.front().first.second ; 
            int steps = q.front().second ; 

            q.pop() ; 


            if(i == I && j == J) {
                return steps ; 
            }

            if(i+1 < m && f[i+1][j] != 0  && !seen[i+1][j]){
                seen[i+1][j] = true ; 
                q.push({{i+1 ,j} , steps + 1}) ; 
            }

            if(i-1 >= 0 && f[i-1][j] != 0  && !seen[i-1][j]){
                seen[i-1][j] = true ; 
                q.push({{i-1 , j} , steps+1}) ; 
            }


            if(j+1 < n && f[i][j+1] != 0  && !seen[i][j+1]){
                seen[i][j+1] = true ; 
                q.push({{i , j+1} , steps + 1}) ; 
            }

            if(j-1 >= 0 && f[i][j-1] != 0  && !seen[i][j-1]){
                seen[i][j-1] = true ; 
                q.push({{i , j-1} ,steps + 1 }) ; 
            }
        }
        return -1 ; 
    }
    int cutOffTree(vector<vector<int>>& f) {
        int m = f.size() ; 
        int n = f[0].size() ; 

        vector<vector<int>>arr ; 

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){

                if(f[i][j] > 1){
                    arr.push_back({f[i][j] , i , j}) ; 
                }
            }
        }
        sort(arr.begin() , arr.end()) ; 
        int ans = 0 ; 
        int i = 0 , j = 0 ;
        for(auto val : arr){

            int I = val[1] ; 
            int J = val[2] ; 
           
            int steps = bfs(i , j , m , n , f , I , J) ; 

            if(steps == -1) return -1 ; 

            ans += steps ;
            i = I ; 
            j = J ; 

        }
        return ans ;
        
    }
};
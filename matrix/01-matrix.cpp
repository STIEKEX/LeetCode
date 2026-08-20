class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size() ; 
        int n = mat[0].size() ; 


        queue<pair<int ,int>>q ; 
        vector<vector<int>>dis( m ,vector<int>(n , -1)) ; 
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){

                if(mat[i][j] == 0){
                    q.push({i,j}) ; 
                    dis[i][j] = 0 ; 

                }
            }
        }

        int dir[4] = {1 , -1 , 0 , 0} ; 
        int dic[4] = {0 , 0 , -1 , 1} ; 

        while(!q.empty()){
            auto[r , c] = q.front(); 
            q.pop() ; 

            for(int i = 0 ; i<4 ; i++){
                int ni = r + dir[i] ; 
                int nj = c + dic[i] ; 

                if(ni >= 0 && nj >= 0 && ni <m && nj < n && dis[ni][nj] == -1){
                    q.push({ni , nj}) ; 
                    dis[ni][nj] = dis[r][c] + 1 ; 
                }
            }

        }
        return dis ;
        
    }
};
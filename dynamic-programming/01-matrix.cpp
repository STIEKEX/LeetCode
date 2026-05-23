class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

        int m = mat.size() ; 
        int n = mat[0].size() ; 


        queue<pair<pair<int ,int> ,int>>q ; 
        vector<vector<int>>ans(m , vector<int>(n ,  -1)) ; 

        for(int i = 0  ; i <m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(mat[i][j] == 0){
                    q.push({{i,j} , 0}) ; 
                    ans[i][j] = 0 ;
                }
            }
        }

        while(q.size()  > 0){
            int i = q.front().first.first ; 
            int j = q.front().first.second ; 

            int dis = q.front().second ; 
            q.pop() ;

            if(i+1 < m && ans[i+1][j] == -1){
                ans[i+1][j] = dis+1 ; 

                q.push({{i+1 , j} , dis+1}) ; 

            }   


            if(i-1 >= 0  && ans[i-1][j] == -1){
                ans[i-1][j] = dis+1 ; 

                q.push({{i-1 , j} , dis+1}) ; 

            }   



            if(j+1 < n && ans[i][j+1] == -1){
                ans[i][j+1] = dis+1 ; 

                q.push({{i , j+1} , dis+1}) ; 

            }   


            if(j-1 >= 0  && ans[i][j-1] == -1){
                ans[i][j-1] = dis+1 ; 

                q.push({{i , j-1} , dis+1}) ; 

            }   


        }
        return ans ;
        
    }
};
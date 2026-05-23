class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int m = mat.size() ; 
        int n = mat[0].size() ; 

        if(m*n != r*c) return mat ; 

        vector<int>arr(m*n) ;

        int idx = 0 ;

        for(int i = 0 ; i<m ; i++){

            for(int j = 0 ; j<n ; j++){
                arr[idx++] = mat[i][j] ;
            }
        }

        idx = 0 ; 
        vector<vector<int>>ans(r , vector<int>(c)) ;
        for(int i = 0 ; i<r ; i++){

            for(int j = 0 ; j<c ; j++){

                ans[i][j] = arr[idx++] ;
            }
        }
        return ans ;
        
    }
};
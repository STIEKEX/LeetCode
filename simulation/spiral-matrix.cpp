class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size() ; 
        int n = matrix[0].size() ;  
        vector<int>ans ; 

        int sRow = 0 , sCol = 0 , eRow = m-1 , eCol = n-1 ; 

        while(sRow <= eRow && sCol <= eCol){

            //top ;     
            for(int i = sCol ; i<= eCol ; i++){
                ans.push_back(matrix[sRow][i]) ; 
            }

            // right ; 

            for(int i = sRow+1 ; i<=eRow ; i++){
                ans.push_back(matrix[i][eCol]) ; 
            }

            //bottom ; 

            for(int i = eCol -1 ; i>=sCol ; i--){
                if(eRow == sRow){
                    break ;
                }
                ans.push_back(matrix[eRow][i]) ; 
            }


            //left ; 
            for(int i = eRow -1 ; i>=sRow+1 ; i--){
                if(eCol == sCol){
                    break ;
                    
                }
                ans.push_back(matrix[i][sCol]) ; 
            }
            sRow++ , eRow-- , sCol++ , eCol-- ; 
        }
        return ans ;
    }
};
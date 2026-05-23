class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size() ; 

        int col = matrix[0].size() ; 

        int st = 0 , end = row -1 ; 
        int idx = -1 ;

        while(st <= end){

            int mid = st + (end - st ) /2 ; 

            if(matrix[mid][0] == target) return true ;
            

            if(matrix[mid][0] <= target && matrix[mid][col-1] >= target){
                idx = mid ;
            break ;
           } 


            else if(matrix[mid][0] > target){
                end = mid-1 ;
            }
            else {
                st = mid+1 ;
            }
        }

        if(idx == -1) return false ;

        for(int i = 0 ; i<col ; i++){

            if(matrix[idx][i] == target) return true ;
        }
        return false ;
        
    }
};
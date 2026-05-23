class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size() ; 
        
        
        for(int i = 1 ; i<n-1 ; i++){
            bool left = true ;
            bool right = true ;
            for(int j = 1 ; j<= i  ; j++){
                
                if(arr[j-1] >= arr[j]) {
                    left = false ;
                    break ;
                }
            }
            
            for(int k = i+1; k<n ; k++){
                if(arr[k-1] <= arr[k]) {
                    right = false ; 
                    break ;
                }
            }
            if(left && right) {
                return true ;
            }
        }
        return false ;
    }
};
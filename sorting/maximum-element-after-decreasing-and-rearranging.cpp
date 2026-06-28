class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size() ; 
        int op = 0 ; 

        int j = 0 ; 
       
        for(int i = 0 ; i<n ; i++){
            if(arr[i] == 1){
                swap(arr[i] , arr[j]) ; 
                op++ ; 
                break ;  
            }
        }

        for(int i = 1 ; i<n ; i++){

            if(abs(arr[i-1] - arr[i]) <= 1){
               continue ; 
            }
            else{
                op++ ; 
                arr[i] = arr[i-1]+1 ; 
            }
        }
        int mx = INT_MIN ; 
        for(int val : arr){
            mx = max(val , mx) ; 
        }
        return mx ; 
    }
};
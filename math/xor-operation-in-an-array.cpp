class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n] ;
        arr[0] = start ; 
        for(int i = 1 ; i<n ; i++){
            arr[i] = start +2 * i ;
        }        
        int ans = 0 ; 
        for(int val : arr){
            ans ^= val ;
        }
        return ans; 
    }
};
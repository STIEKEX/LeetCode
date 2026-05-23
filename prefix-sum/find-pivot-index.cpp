class Solution {
public:
    int pivotIndex(vector<int>& arr) {
         int n = arr.size() ; 
        vector<int>prefix(n) ;
        prefix[0] = 0 ;
        
        for(int i = 1 ; i<n ; i++){
            prefix[i] = prefix[i-1] + arr[i-1] ;
        }
        
        vector<int>suffix(n) ;
        suffix[n-1] = 0 ;
        
        for(int i=n-2 ; i>=0 ;i--){
            suffix[i] = suffix[i+1] + arr[i+1] ;
        }
        //  if(prefix[0] == suffix[0]){
        //     return 0 ;
        // }
        // if(prefix[n-1] == suffix[n-1]){
        //     return n-1 ;
        // }
        
        int i = 0 , j = 0  ;
        while(i<n  && j<n){
            if(prefix[i] == suffix[j]){
                return i ;
            }
            i++ ;
            j++ ;
        }
       
        return -1 ;
        
    }
};
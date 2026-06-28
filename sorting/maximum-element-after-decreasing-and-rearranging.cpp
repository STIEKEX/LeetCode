class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size() ; 
        sort(arr.begin() , arr.end()) ; 

        if(arr[0] != 1){
            arr[0] = 1 ; 
        }
        
        for(int i = 1 ; i<n ; i++){

            if(abs(arr[i-1] - arr[i]) <= 1){
                continue ; 
            }
            else{
                arr[i] = arr[i-1]+1 ; 
            }
        }
        int mx = INT_MIN  ;
        for(int val : arr){
            mx = max(val , mx)  ;
        }
        return mx ; 
    }
};
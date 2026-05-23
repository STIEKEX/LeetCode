class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int count = 0 ; 

        int n = arr.size() ; 
        int avg = 0 ; 
        int sum = 0 ;
        for(int i = 0 ; i<k ; i++){
            sum += arr[i] ;
        }
        avg = sum/k ;
        if(avg >= threshold) count++ ;

        for(int i = k ; i<n ; i++){

            sum = sum - arr[i-k] ; 
            if(sum < 0) {
                sum = 0 ;
            }

            sum += arr[i] ; 
            avg = sum / k ; 
            if(avg >= threshold){
                count++ ;
            }
        }
        return count ;
        
    }
};
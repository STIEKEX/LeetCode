class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {

        int n = arr.size() ; 

        int ans = INT_MAX; 
        int len = 0 ; 

        int i = 0 , j = 0 ; 
        int sum = 0 ;
        vector<int>best(n , INT_MAX)  ;
        while(j < n){

            sum += arr[j] ; 

            while(sum > target){
                sum -= arr[i] ; 
                i++ ; 
            }

            if(j > 0){
                best[j] = best[j-1] ; 
            }

            if(sum == target){

                len = j - i+1 ; 


                if(j > 0 && best[j-1] != INT_MAX){
                    ans = min(ans , len + best[j-1]) ; 
                }

                best[j] = min(best[j] , len) ; 

                
            }
            j++ ; 

        }
        return (ans == INT_MAX) ? -1 : ans ;
        
    }
};
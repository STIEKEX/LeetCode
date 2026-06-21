class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size() ; 


        int mx = INT_MIN  ;

        for(int val : costs){
            mx = max(val , mx) ; 
        }

        vector<int>arr(mx+1 , 0) ; 

        for(int val : costs){
            arr[val]++ ; 
        }

        int cnt =0 ; 

        for(int i = 0 ; i<=mx ; i++){

            int freq = arr[i] ; 
            while(i <= coins && freq != 0){
                cnt++ ; 
                freq-- ; 
                coins -= i ; 
            }
        }
        return cnt ; 
        
        
    }
};
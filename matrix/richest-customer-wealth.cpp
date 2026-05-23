class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
      int m = arr.size();        // number of rows
      int n = arr[0].size();  


        int sum = 0 , maxsum = 0 ;
        for(int i=0 ; i<m ; i++) {
            sum = 0 ; 
            for(int j =0 ; j<n ; j++){
                sum += arr[i][j]   ;         
             }
             maxsum = max(maxsum , sum ) ;
        }
        return maxsum ;

    }
};
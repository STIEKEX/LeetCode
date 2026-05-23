class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int m  = tasks.size() ;
        int n= tasks[0].size() ;
        int minsum = INT_MAX ;

        int sum = 0 ; 
        for(int i=0 ; i<m ; i++){
            sum = 0 ; 
            for(int j=0 ; j<n ; j++){
                sum += tasks[i][j] ; 
                
            }
            if(sum < minsum){
                minsum = sum ; 
            }
            
        }
        return minsum ;
       
            
        
        
    }
};
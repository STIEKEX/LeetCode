class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& arr) {

        int n = arr.size() ; 

        int timeTaken = 0 ; 

        double ans = 0 ;


        for(int i = 0 ; i < n ; i++){
            int totalTime = 0 ; 
            if(timeTaken > arr[i][0]){
                int startingTime = (timeTaken - arr[i][0] ) + arr[i][0]; 
                totalTime = startingTime + arr[i][1] ; 

                ans += totalTime - arr[i][0] ;
                
            }
            else{
                totalTime = arr[i][0] + arr[i][1] ; 
                ans += totalTime - arr[i][0] ;
            }
            timeTaken = totalTime ; 
        }
       ans =  ans / arr.size() ; 
       return ans ;

        




        
    }
};
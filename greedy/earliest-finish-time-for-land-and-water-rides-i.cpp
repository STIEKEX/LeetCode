class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        // 6 9   9 

        // 9 12  13 10



        // int landSum = 0  ;
        // int waterSum =  0 ;

        int m = landStartTime.size() ; 
        int n = waterStartTime.size() ; 

        for(int i = 0 ; i<landDuration.size() ; i++){
            landStartTime[i] += landDuration[i] ; 
        }

        for(int i = 0 ; i<waterDuration.size() ; i++){
            waterStartTime[i] += waterDuration[i] ; 
        }


        int ans = INT_MAX ; 

        int i = 0 , j = 0 ; 

        for(int i = 0 ; i<m ; i++){
            int x = landStartTime[i] ; 

            for(int j = 0 ; j<n ; j++){
                int y = waterDuration[j] ; 
                ans = min(ans , x + y) ; 
            }
        }


        for(int i = 0 ; i<n ; i++){
            int x = waterStartTime[i] ; 

            for(int j = 0 ; j<m ; j++){
                int y = landDuration[j] ; 
                ans = min(ans , x + y) ; 
            }
        }
        return ans ;

        

       
    }
};
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

        int m = landStartTime.size() ; 
        int n = waterStartTime.size() ; 

        int ans = INT_MAX ; 
        for(int i =0 ; i<m ; i++){

            int f = landStartTime[i] + landDuration[i] ; 

            for(int j = 0 ; j<n ; j++){
                int start = max(waterStartTime[j] , f) ; 

                ans = min(ans , start+waterDuration[j]) ; 
            }
        }


        for(int i =0 ; i<n ; i++){

            int f = waterStartTime[i] + waterDuration[i] ; 

            for(int j = 0 ; j<m ; j++){
                int start = max(landStartTime[j] , f) ; 

                ans = min(ans , start+landDuration[j]) ; 
            }
        }
        return ans ;
        
    }
};
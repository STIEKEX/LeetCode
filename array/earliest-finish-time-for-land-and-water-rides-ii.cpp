class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {

        int m = ls.size() ; 
        int n = ws.size() ; 

        // FOR LAND -> WATER 
        int mnL = INT_MAX ; 

        // FINDING THE MINIMUM LAND-DURATION 
        for(int i = 0 ; i<m ; i++){
            mnL = min(mnL , ls[i] + ld[i]) ; 
        }

        // CHECKING FOR EVERY WATER DURATION ;
        int ans=  INT_MAX ; 
        for(int i = 0 ; i<n ; i++){
            ans = min(ans , max(mnL , ws[i]) + wd[i]) ; 
        }



        // WATER -> LAND ; 

        int mnW = INT_MAX  ;

        for(int i = 0 ; i<n ; i++){
            mnW = min(mnW , ws[i] + wd[i]) ;
        }

        for(int i = 0 ; i<m ; i++){
            ans = min(ans,  max(mnW , ls[i]) + ld[i]) ; 
        }
        return ans ;






        
    }
};
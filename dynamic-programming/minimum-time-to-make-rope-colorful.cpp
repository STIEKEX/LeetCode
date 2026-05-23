class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int sum = 0 , mx = 0  ;

        for(int i = 0 ; i<colors.size() ; i++){
            if(i>0  &&colors[i] != colors[i-1] ){
                mx = 0 ;
            }
            sum += min(mx , neededTime[i]) ; //ignore the maximum values for every group :
            mx = max(mx , neededTime[i]) ; // maintain a amaximum group for each group ;
        }
        return sum ;
    }
};
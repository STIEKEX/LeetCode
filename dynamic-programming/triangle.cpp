class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int sum = 0 ; 

        for(auto val : triangle){
            int mn = INT_MAX ; 
            for(int num : val){
                mn = min(num , mn) ; 
            }
            sum += mn ; 
        }
        return sum ; 
        
    }
};
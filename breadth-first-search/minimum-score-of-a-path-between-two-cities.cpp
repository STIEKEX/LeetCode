class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
            int mn = INT_MAX ; 

            for(auto val : roads){
                int dis = val[2] ; 

                mn = min(dis , mn) ; 
            }
            return mn ; 
    }
};
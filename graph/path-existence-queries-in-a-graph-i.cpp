class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        // sort(queries.begin() , queries.end()) ; 
        vector<bool>ans; 

        vector<int>comp(n , true) ; 

        for(int i = 1 ; i<n ; i++){
            if(abs(nums[i-1] - nums[i]) <= maxDiff){
                comp[i-1] = true ;
            }
            else{
                comp[i-1] = false ;
            }
        }

        

        for(auto val : queries){
            int u = val[0] ; 
            int v = val[1] ; 
            if(comp[u] == comp[v]){
                ans.push_back(true) ; 
            }
            else{
                ans.push_back(false) ; 
            }
        }
        return ans ;
        
    }
};
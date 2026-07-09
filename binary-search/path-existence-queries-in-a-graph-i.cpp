class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        // sort(queries.begin() , queries.end()) ; 
        vector<bool>ans; 

        // vector<int> a(n+1 , 0) ; 

        

        for(auto val : queries){
            int u = val[0] ; 
            int v = val[1] ; 
            bool is = true ;
            for(int i = min(v ,u) ; i< max(v ,u) ; i++){
                if(abs(nums[i] - nums[i+1]) > maxDiff){
                    ans.push_back(false) ;
                    is = false;  
                    break ; 
                }
                
            }
            if(is){
                ans.push_back(true) ; 
            }
        }
        return ans ;
        
    }
};
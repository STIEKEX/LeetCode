class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<bool>ans ; 
        vector<int>prefix(n , 0) ;
        prefix[0] = 0 ; 

        for(int i =1 ;i <n ; i++){
            prefix[i] = prefix[i-1] ; 
            if(abs(nums[i] - nums[i-1]) > maxDiff){
                prefix[i]++ ; 
            }
        }

        for(auto val : queries){
           int u = max(val[1] , val[0]) ; 
           int v = min(val[1] , val[0]) ; 

           ans.push_back((prefix[u] - prefix[v]) == 0) ; 



        }
        return ans ;
    }
};
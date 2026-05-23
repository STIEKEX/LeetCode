class Solution {
public: 
        vector<vector<int>>ans ; 
        void dfs(int src , int target , vector<vector<int>>&graph , vector<int>arr){
            arr.push_back(src) ; 
            if(src == target){
                ans.push_back(arr) ; 
                arr.pop_back() ;
            }

            for(int val : graph[src]){
                dfs(val , target , graph , arr) ;
            }
            arr.pop_back() ;
        }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        int target = graph.size() - 1 ; 

        vector<int>arr ; 
        dfs(0 , target , graph , arr) ;
        return ans ;
        
    }
};
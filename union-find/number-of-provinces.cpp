class Solution {
public:

    void dfs(int u , vector<vector<int>>&g , vector<bool>&seen){

        seen[u] = true ; 
        int n = g.size() ; 
        for(int v = 0 ; v<n ; v++){

            if(g[u][v] == 1 && !seen[v]){
                dfs(v , g , seen)  ;
            }
        }
    }
    int findCircleNum(vector<vector<int>>& g) {
        int m = g[0].size() ; 
        int n = g.size() ; 

      vector<bool>seen(n , false) ; 

        int cnt = 0 ; 
        for(int i = 0 ; i< n ; i++){

            if(!seen[i]){
                cnt++ ; 
                dfs(i , g , seen) ; 
            }
        }
        return cnt ; 
        
    }
};
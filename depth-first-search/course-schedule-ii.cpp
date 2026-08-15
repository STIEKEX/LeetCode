class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {

        vector<vector<int>>adj(n) ; 

        for(auto val : pre){
            int u  = val[0] ; 
            int v = val[1] ;
            adj[v].push_back(u) ; 
        }

        vector<int>in(n) ; 

        for(int i = 0 ; i<n ; i++){
            for(int val : adj[i]){
                in[val]++ ; 
            }
        }

        queue<int>q  ;

       for(int i = 0 ; i<n ; i++){
        if(in[i] == 0){
            q.push(i) ; 
        }
       }
        vector<int>ans ;
       while(q.size()){
            int u = q.front() ; 
            q.pop()  ;

            ans.push_back(u) ; 

            for(int  val : adj[u]){
                in[val]-- ; 
                if(in[val] == 0){
                    q.push(val) ; 
                }
            }
       }
       if(ans.size() != n) return {} ; 
       return ans ;
        
    }
};
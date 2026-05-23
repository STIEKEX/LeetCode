class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& edges) {

        vector<vector<int>>adj(n) ; 

        for(auto val : edges){
            int u = val[0] ; 
            int v = val[1] ; 

            adj[v].push_back(u) ; 
        }
        

        vector<int>in(n ,0) ;
        
       for(auto val : edges){
        int u = val[0] ; 
        int v = val[1] ; 
        in[u]++ ;
       }

       queue<int>q;  
       for(int i = 0 ; i<n ; i++){
        if(in[i] == 0){
            q.push(i) ; 
        }
       }
       vector<int>ans ; 
       while(q.size() > 0){
        int curr = q.front() ; 
        q.pop() ; 
        ans.push_back(curr) ; 

        for(int val : adj[curr]){
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
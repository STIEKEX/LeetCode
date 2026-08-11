class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        

        vector<vector<int>>adj(n) ; 

        for(auto val : p){
            int u = val[0] ; 
            int v = val[1]  ;

            adj[v].push_back(u) ; 
        }
        vector<int>in(n , 0)  ;
        for(int i = 0 ; i<n ; i++){

            for(int val : adj[i]){
                in[val]++ ; 
            }
        }

        queue<int>q ; 
        
        for(int i = 0 ; i<n ; i++){
            if(in[i] == 0){
                q.push(i) ; 
               
            }
        }

        vector<int>arr ; 

        while(q.size()){
            int u = q.front() ; 

            q.pop() ; 

            arr.push_back(u) ; 

            for(int val : adj[u]){
                in[val]-- ; 
                if(in[val] == 0){
                    q.push(val) ; 
                }
            }
        }
        if(arr.size() == n) return true ; 
        return false; 


        
    }
};
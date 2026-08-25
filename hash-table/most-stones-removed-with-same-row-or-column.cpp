class Solution {
public:
    void bfs(int u , vector<vector<int>>&adj , vector<bool>&seen){

        queue<int>q ; 
        q.push(u) ; 
        seen[u] = true ; 

        while(q.size()){
            int u = q.front() ;
             q.pop() ; 

            for(int val : adj[u]){
                if(!seen[val]){
                    q.push(val) ; 
                    seen[val] = true ;
                }
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        

        int n = stones.size() ; 

        vector<vector<int>>adj(n) ; 

        for(int i = 0 ; i<n ; i++){

            for(int j = 0 ; j<n ; j++){

                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][0]){
                    adj[i].push_back(j) ; 
                    adj[j].push_back(i) ; 
                }
            }
        }

        vector<bool>seen(n , false) ; 
        int cnt = 0 ;

        for(int i = 0 ; i<n ; i++){

            if(!seen[i]){
                cnt++ ; 
                bfs(i , adj , seen) ; 
            }
        }
        return n - cnt ; 
    }
};
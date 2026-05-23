class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& e, int src, int dst, int k) {

        vector<vector<pair<int ,int>>>adj(n) ; 

        for(auto val : e){
            int u = val[0] ;
            int v = val[1] ; 
            int w = val[2] ; 

            adj[u].push_back({v ,w}) ; 
        }


        vector<int>dis(n , INT_MAX) ; 

        queue<pair<pair<int ,int> , int>>q ; 

        q.push({{src , 0} , 0}) ; 
        dis[src] = 0 ; 

        while(q.size() > 0){
            int s = q.front().first.first ; 
            int w = q.front().first.second ; 
            int stop = q.front().second ; 
            q.pop() ;

            if(stop > k) continue ; 

            for(auto val : adj[s]){
                int sr = val.first ; 
                int wt = val.second ; 

                if(wt + w < dis[sr]){
                    dis[sr] = wt + w ; 
                    q.push({{sr , wt+w} , stop+ 1}) ;
                }
            }
        }
        if(dis[dst] == INT_MAX) return -1 ; 

        return dis[dst] ;
        
    }
};
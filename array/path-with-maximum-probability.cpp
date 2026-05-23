class Solution {
public:
        void dij(int src , int target , vector<vector<pair<int ,double>>>&adj , vector<double>&prop , int n , vector<double>&dis){

            priority_queue<pair<double ,int>>pq ; 

            pq.push({1.0 , src}) ; 
            dis[src] = 1.0 ; 

            while(pq.size() > 0){

                int sr = pq.top().second ; 
                double wt = pq.top().first ; 
                pq.pop() ;

                for(auto val : adj[sr]){
                    
                    int s = val.first ;
                    double w = val.second;
                    if(w * wt > dis[s]){
                        dis[s] = w*wt ; 
                        pq.push({w * wt , s}) ;
                    }

                    
                    
                }
            }

        }
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& prop, int start_node, int end_node) {

        vector<vector<pair<int ,double>>>adj(n) ; 
        

       for(int i = 0 ; i<edges.size() ; i++){

            int u = edges[i][0] ; 
            int v = edges[i][1] ; 
            double w = prop[i] ;

            adj[u].push_back({v , w}) ; 
            adj[v].push_back({u , w}) ; 
       }
        vector<double>dis(n , 0.0) ;     

        dij(start_node , end_node , adj ,prop , n , dis) ;
        
        return dis[end_node] ;

       





        
    }
};
class Solution {
public:
    int dis(vector<vector<int>>&points , int p1 , int p2){
        return abs(points[p1][0] - points[p2][0]) + abs(points[p1][1] - points[p2][1]) ;
    }
    int minCostConnectPoints(vector<vector<int>>& points) {

        int n = points.size() ; 

        vector<bool>seen(n , false) ; 

        priority_queue<pair<int ,int> , vector<pair<int ,int> > , greater<pair<int ,int>>>pq ; 


        pq.push({0 ,0}) ; 
        int cost = 0 ;

        while(pq.size() > 0){
            int wt = pq.top().first ;
            int u = pq.top().second ; 
            pq.pop() ; 

            if(!seen[u]){   
                cost += wt ; 
                seen[u] = true ;
                for(int i = 0 ; i<n ; i++){

                    if(!seen[i]){

                        int w = dis(points , u , i) ; 
                        pq.push({w , i}) ; 
                    }
                }

            }
           
        }
        return cost ;

        
    }
};
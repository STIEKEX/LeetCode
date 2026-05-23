class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 


        priority_queue<
    pair<int, pair<int,int>>,
    vector<pair<int, pair<int,int>>>,
    greater<>
> pq;
        vector<vector<int>>dis(m , vector<int>(n , INT_MAX)) ;

        vector<pair<int ,int>>dir{{1,0}, {-1, 0} , {0,1} , {0,-1}};
        dis[0][0] = grid[0][0] ; 
        pq.push({dis[0][0] , {0 , 0}}) ;

        while(pq.size()  > 0){

            int r = pq.top().second.first; 
            int c = pq.top().second.second ; 

            int cost = pq.top().first; 
            pq.pop() ;
            if(r == m-1 && c == n-1){
                return cost ; 
            }

            for(auto it : dir){
                int nr = r+it.first; 
                int nc = c + it.second ; 

                if(nr >= 0 && nc >= 0 && nr <m && nc < n ){
                    int newcost = cost + grid[nr][nc] ; 
                    if(newcost < dis[nr][nc]){
                    dis[nr][nc] = newcost ; 

                    pq.push({newcost , {nr ,nc}});
                }
                }

                
            }
        }
        return -1 ;

    }
};
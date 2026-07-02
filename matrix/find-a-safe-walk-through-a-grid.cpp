class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int h) {
        int m = grid.size() ; 
        int n = grid[0].size(); 


        vector<vector<int>>best(m , vector<int>(n ,  -1)) ; 

        priority_queue< pair<int , pair<int ,int> > > pq ; 

        h = h- grid[0][0] ; 

        if(h <= 0) return false ;
        pq.push({h , {0 , 0}}) ; 
        best[0][0] = h ; 


        int dx[] = {0 , 0 , 1 , -1} ; 
        int dy[] = {1 , -1 , 0 , 0} ; 
        while(!pq.empty()){

            int h = pq.top().first; 
            int i = pq.top().second.first ; 
            int j = pq.top().second.second ; 
            pq.pop() ; 

            
            if(i == m-1 && j == n-1) return true ;


            for(int k = 0 ; k<4 ; k++){
                int nr = i+ dx[k]  ; 
                int nc =  j + dy[k] ; 

                if(nr < 0 || nc < 0 || nr >= m || nc >= n )  continue ;

                int nH = h - grid[nr][nc] ;
                if(nH <= 0)continue ; 

                if(nH > best[nr][nc]){
                    best[nr][nc] = nH ;
                    pq.push({nH , {nr , nc}}) ; 
                }

                
            }


        }
        return false ; 
        
        
    }
};
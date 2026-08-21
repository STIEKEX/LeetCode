class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int t) {

        vector<vector<int>>dis(n , vector<int>(n , 1e9)) ; 

        for(int i = 0 ; i<n ; i++){
            dis[i][i] = 0 ; 
        }   

      for(auto val : edges){
            int u = val[0] ; 
            int v = val[1] ; 
            int w = val[2] ; 

            dis[u][v] = w ; 
            dis[v][u] = w ; 
      }


      for(int k = 0 ; k<n  ; k++){

        for(int i = 0 ; i<n ; i++){
            
            for(int j = 0 ; j<n ; j++){

                dis[i][j] = min(dis[i][j] , (dis[i][k] + dis[k][j])) ; 
            }
        }
      }

      int ans = -1 ; 
    int mn = INT_MAX ;
      for(int i = 0 ; i<n ; i++){

        int cnt = 0 ; 
        for(int j = 0 ; j<n ; j++){

            if(i != j && dis[i][j] <= t){
                cnt++ ; 
            }
        }
        if(cnt <= mn ){
            mn = cnt ; 
            ans = i ; 
        }
      }
      return ans ;



      
            
        


        
    }
};
class Solution {
public:
        void dfs(int src ,vector<bool>&seen , vector<vector<int>>& room){
           seen[src] = true ; 

            for(int val : room[src]){
                if(!seen[val]){
                    dfs(val , seen , room) ; 
                }
            }
        }
        
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size() ; 

       
        vector<bool>seen(n , false) ;

    //   for(int i = 0 ; i<n-1 ;i++){
    //     dfs(i , seen , rooms) ;

    //   }
    dfs(0 , seen , rooms) ;
       
       for(int i = 0 ; i<n ; i++){
        if(seen[i] == false){
            return false;
        }
       }
       return true ;
        
        
        
    }
};
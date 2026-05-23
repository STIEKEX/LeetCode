class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {

        vector<int>in(n , 0) ; 
        
        for(auto val : edges){
            int u = val[0];
            int v = val[1] ; 
            in[v]++ ;
        }

        int count = 0 ; 
        int ans = 0 ;

        for(int i = 0 ; i<n ; i++){
            if(in[i] == 0){
                count++ ; 
                ans = i ;
            }
        }
        if(count > 1) return -1 ;
        return ans ;
        
    }
};
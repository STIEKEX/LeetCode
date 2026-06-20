class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& r) {

    

        
        vector<int>mx(n+1 , 0);
        mx[0] = 0  ;
        for(auto val : r){
            int id = val[0] ; 
            int h = val[1] ; 

            mx[id] = h ; 
        }
        mx[1] = 1 ;
        int ans = INT_MIN ; 
        for(int i = 2 ; i<n ; i++){
            int left = mx[i-1] ;
            int right = mx[i+1] ; 
            if(left == right){
                mx[i] = left + 1 ; 
            }

            if(right - left == 1){
                mx[i] = left ; 
            }
            if(right == 0){
                mx[i] = left+1 ; 
            }
            ans = max(ans, mx[i]) ; 
        }  
        return ans ;     
        
    }
};
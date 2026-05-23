class Solution {
public:
    int maxDistance(vector<int>& colors) {
       
       int dis = INT_MIN ; 
        int n = colors.size() - 1 ; 
       for(int i = 0 ; i<n ; i++){
        if(colors[i] != colors[n]){
            dis = max(dis , abs(i - (n))) ;
        }
       }
       for(int i = n ; i>= 0 ;i--){
        if(colors[0] != colors[i]){
            dis = max(dis ,abs(0 - i)) ;
        }
       }
       return dis ;
        
    }
};
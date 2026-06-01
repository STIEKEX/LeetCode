class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin() , cost.end()) ; 
        //  2 2 5 6 7 9
        int i = cost.size() -1 ; 
        int count = 0 ;
        int ans = 0 ;
        while( i>=0){
            if(count == 2){
                i-- ; 
                count = 0;
                continue ; 

            }
            ans += cost[i] ; 
            count++ ; 
            i-- ; 

        }
        return ans ;
        
    }
};
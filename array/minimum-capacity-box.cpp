class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {

        int n = capacity.size() ; 


        int mn = INT_MAX ;
        int idx =-1 ; 

        for(int i = 0 ; i<n ;i++){

            if(capacity[i] >= itemSize && capacity[i] < mn){
                mn = min(capacity[i] , mn) ;
                idx = i ;
            }
        }

       
        return idx ;
        
    }
};
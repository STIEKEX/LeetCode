class Solution {
public:
    bool isPossible(vector<int>& target) {
        int n = target.size() ; 
        bool is = false ;
        int x = target[0] ; 
        for(int val : target){
            if(val > 1 && val < n){
                return false ;
            }
            if(val != x){
                is = true ; 
            }
            
        }

        if(!is) return false ; 
        return true; 
        
    }
};
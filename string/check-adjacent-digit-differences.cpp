class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {

        int n = s.size() ; 
        
        for(int i = 1 ; i<n ; i++){
            int val1 = s[i-1] - 'a' ; 
            int val2 = s[i] - 'a' ; 
            if(abs(val1-val2) > 2) return false ;
        }
        return true ;
        
    }
};
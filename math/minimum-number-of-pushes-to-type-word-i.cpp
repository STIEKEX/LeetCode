class Solution {
public:
    int minimumPushes(string word) {

        int n = word.size() ;

        if(n <= 8) return n ; 

        else if(n == 16) return 24 ; 

        else if(n == 26) return 8 + 16 + 24 + 8 ; 

        int rem = n - 8 ; 
        return 8 + (rem * 2) ; 
        
    }
};
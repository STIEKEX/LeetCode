class Solution {
public:
    int minLengthAfterRemovals(string s) {
        
        unordered_map<char , int> m ; 
        int a = 0 ; 
        int b = 0 ;
        for(char val : s){
            if(val == 'a')a++ ; 
            else b++ ;
        }
        return abs(a - b) ;


        
        
    }
};
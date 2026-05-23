class Solution {
public:
    bool judgeCircle(string moves) {
        int l = 0 ; 
        int r = 0 ;
        int u = 0 ; 
        int d = 0 ; 

        for(char ch : moves){
            if(ch == 'L') l++ ; 
            if(ch == 'D') d++ ; 
            if(ch == 'R') r++ ; 
            if(ch == 'U') u++ ; 
        }
        return l == r && u == d ;
        
    }
};
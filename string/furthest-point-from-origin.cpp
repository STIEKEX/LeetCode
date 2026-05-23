class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size() ; 

        int l = 0 ; 
        int r = 0 ; 
        int d = 0 ;

        for(char ch : moves){
            if(ch == 'L')l++ ; 
            if(ch == 'R')r++ ; 
            if(ch == '_')d++ ; 
        }
        int count = 0 ;
        if(l >= r){
            count = (l -r) + d;
        }
        else{
            count = (r - l) + d ;
        }
        return count ;
        
    }
};
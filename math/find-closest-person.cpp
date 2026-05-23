class Solution {
public:
    int findClosest(int x, int y, int z) {
        int pos1 = z-x ; 

        int pos2 = z-y ;
        if(abs(pos1) == abs(pos2)){
            return 0 ;
        }

        if(abs(pos1) < abs(pos2)){
            return 1 ;
        }
        else if(abs(pos1) > abs(pos2)){
            return 2 ; 
        } return 0 ;
        
        return -1 ;
            
        
        
    }
};
class Solution {
public:
    int countMonobit(int n) {
        if(n == 0) return 1 ; 
        
        int count = 2 ;
        int val = 3 ; 
        while(n >=val){
            count++ ; 
            val = (val*2) + 1 ;
        }
        return count ;

       

       

        
    }
};
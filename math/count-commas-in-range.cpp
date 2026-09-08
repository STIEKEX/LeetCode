class Solution {
public:
    int countCommas(int n) {
        string str = to_string(n) ; 
        int size = str.size() ; 

        if(size < 4){
            return 0 ;
        }
        int count = 0 ; 
        int comma = 0 ; 

        comma = (size-1) / 3 ; 
        int number = n -1000 ; 
        int ans = comma * (number+1) ; 
        return ans ;
        
    }
};
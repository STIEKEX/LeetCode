class Solution {
public:
    bool validDigit(int n, int x) {

        string str = to_string(n) ; 
        if(str[0]- '0' == x) return false ;

        while(n != 0){
            int rem = n % 10 ; 
            if(rem == x){
                return true ;
            }
            n = n/10 ;
        }

        return false ;
    }
};
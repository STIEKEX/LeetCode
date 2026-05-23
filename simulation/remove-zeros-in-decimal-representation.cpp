class Solution {
public:
    long long removeZeros(long long n) {
         string digit  = to_string (n) ;
         string ans = "" ;
        for(char val : digit){
            if(val !='0'){
                ans += val ;
            }
        }
        return stol(ans) ;
    }
};
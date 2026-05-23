class Solution {
public:
    long long sumAndMultiply(int n) {
        
        string num = to_string(n) ;
        int size = num.size() ;

        int sum = 0 ;
        int countzero = 0 ;
        string newnum = "" ;
        for(char val : num){
            if(val != '0'){
                sum += val - '0' ;
                newnum += val ;
            }else{
                countzero++ ;
            }
        }
        if(size == countzero){
            return 0 ;
        }
        long long ans = stoll(newnum) * sum ;
        return ans ;
        
        
    }
};
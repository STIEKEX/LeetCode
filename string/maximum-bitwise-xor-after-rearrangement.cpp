class Solution {
public:
    string maximumXor(string s, string t) {

        int zero = 0 , one = 0 ; 
    
        for(char ch : t){
            if(ch == '0'){
                zero++ ;
            }
            else{
                one++ ;
            }
        }
        string ans = "" ;
        for(char ch : s){

            if(ch == '0'){
                if(one > 0){
                    ans += '1' ;
                    one-- ;
                }
                else{
                    ans += '0' ;
                    zero-- ;
                }
            }
            else if(ch == '1'){
                if(zero > 0){
                    ans += '1';
                    zero-- ;
                }
                else{
                    ans +='0' ;
                    one-- ;
                }
            }
        }
        return ans ;


        
    }
};
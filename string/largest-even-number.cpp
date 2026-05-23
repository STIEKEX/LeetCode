class Solution {
public:
    string largestEven(string s) {
        int n = s.size() -1  ;

        if(s[n]%2 ==0){
            return s ;
        }

        while(n >=0){
            if(s[n] == '1'){
                s.pop_back() ;
            }else{
                return s ;
            }
            n-- ;
        }
        return "" ;


        
    }
};
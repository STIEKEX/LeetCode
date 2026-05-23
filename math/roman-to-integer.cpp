class Solution {
public:
        int integer(char ch){
            if(ch == 'I') return 1 ;
            else if (ch == 'V') return 5 ;
            else if(ch == 'X') return 10 ;
            else if(ch == 'L') return 50 ;
            else if(ch == 'C') return 100 ;
            else if(ch == 'D') return 500 ;
            else if(ch == 'M') return 1000 ;
            else {
                return -1 ;
            }
        }
    int romanToInt(string s) {
        int sum = 0 ; 
        int i = 0 ; 
        int n = s.size() ; 
        while(i<n){
            
             if (integer(s[i]) >= integer(s[i+1])){
                sum += integer(s[i]);   
                i++ ;         
            }
            else {
                sum += integer(s[i+1]) - integer(s[i]) ;
                i = i+2 ;         
            }
        }
        return sum ;
    }
};
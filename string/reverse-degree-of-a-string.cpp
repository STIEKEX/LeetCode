class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size() ; 
        int sum = 0 ;
        int j = 1 ;
        for(int i = 0 ; i<n ; i++){
            int rev = 27 - (s[i] - 'a' + 1) ; 
            sum += rev * j;
            j++ ;
        }
        return sum ;


        
    }
};
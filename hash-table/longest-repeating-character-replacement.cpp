class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int st = 0 ; 
        int end = 0 ;

        int len = 0 ; 
        int maxlen = 0 ;

        int mxfreq = 0 ; 
        
        vector<int>freq(26 , 0) ;

        while(end < s.size()){

            freq[s[end] -'A']++ ;

            mxfreq = max(mxfreq , freq[s[end] - 'A']) ;

            len = end -st + 1 ;

            while(len - mxfreq > k){
                
                freq[s[st] - 'A']-- ;
                st++ ; 
                len-- ;
            }

            maxlen = max(maxlen , len) ;
            end++ ;
        }
        return maxlen ;
        
    }
};
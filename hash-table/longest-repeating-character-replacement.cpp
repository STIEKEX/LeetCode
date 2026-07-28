class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size() ; 

        int i = 0 , j = 0 ; 

        int mx = INT_MIN ; 
        int mxF = 0 ; 

        vector<int>f(256 ,0) ; 

        while(j < n){
            char ch = s[j] ; 

            f[ch- 'A']++ ; 

            mxF = max(mxF , f[ch-'A']);
            int len = j -i+1 ; 
            while(len - mxF > k){
                f[s[i]-'A']-- ; 
                i++ ; 
                len-- ; 
            }
            mx = max(mx , len) ; 
            j++  ;
        }
        return mx ; 
    }
};
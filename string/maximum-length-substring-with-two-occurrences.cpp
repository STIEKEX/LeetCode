class Solution {
public:
    int maximumLengthSubstring(string s) {

        unordered_map<char ,int>m ; 

        int n = s.size() ; 

        int i = 0 , j = 0 ; 
        int cnt = 0 ;
        while(j < n){

            char ch = s[j] ; 
            m[ch]++ ; 

            while(i<j && m[ch] > 2){
                m[s[i]]-- ; 
                i++ ; 
            }
            cnt = max(cnt , j-i+1) ; 
            j++ ; 

        }
        return cnt ; 
        
    }
};
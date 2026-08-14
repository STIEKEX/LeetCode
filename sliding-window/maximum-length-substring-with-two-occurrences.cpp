class Solution {
public:
    int maximumLengthSubstring(string s) {

        unordered_map<int ,int>m ; 

        int n = s.size() ; 

        int i = 0 , j = 0 ; 
        int cnt = 0 ;
        while(j < n){

            char ch = s[i] ; 
            m[ch]++ ; 

            while(m[ch] > 2 && i < j){
                m[s[i]]-- ; 
                i++ ; 
            }
            cnt = max(cnt , j-i+1) ; 
            j++ ; 

        }
        return cnt ; 
        
    }
};
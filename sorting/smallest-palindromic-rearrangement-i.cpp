class Solution {
public:
    string smallestPalindrome(string s) {

        int n = s.size() ; 

        int freq[26] = {0} ; 

        for(int i = 0 ; i<n/2 ; i++){
            freq[s[i] - 'a']++ ; 
        }

        int idx = 0 ;
        for(int i = 0;  i<26 ; i++){
            while(freq[i] > 0){
                
                char ch = 'a' + i ; 
                s[idx] = ch ; 

                s[n-1-idx] = ch ;
                idx++ ; 
                freq[i]-- ; 
            }   
          
        }
        return s ; 

        
        
    }
};
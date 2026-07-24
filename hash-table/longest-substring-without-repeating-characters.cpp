class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size() ; 

        int mx = INT_MIN ; 
         int i = 0 , j = 0 ; 
        int len = 0 ;
        vector<bool>seen(26 , false) ; 

         while(j<n){
            char ch = s[j] ; 
            while(seen[ch -'a'] && i<n){
                seen[s[i] - 'a'] = false ;
                i++ ; 
            }
            if(!seen[ch -'a']){
                 
                seen[ch -'a'] = true ; 
                 
            }

            
            mx = max(mx , j-i+1) ;
            j++ ; 
            
            
         }
         if(mx == INT_MIN) return "" ; 
         return mx  ;
        
    }
};
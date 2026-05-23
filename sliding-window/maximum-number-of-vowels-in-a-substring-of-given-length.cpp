class Solution {
public:
        bool isvow(char ch){
            if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'){
                return true ;
            }
            return false ;
        }
    int maxVowels(string s, int k) {

        int i = 0 ; 
        int j = 0 ;

        // vetor<int>freq(26 , 0) ;
        int count = 0 ;
        int mx = INT_MIN ;
        while(j<s.size()){

            if(isvow(s[j])){
                count++ ;
            }
            // freq[s[j]-'a'] ;

            if(j-i+1 == k){
                mx = max(mx ,count) ;
                
            }
            
            if(j-i+1 < k){
                j++ ;
            }
            else{
                if(isvow(s[i])){
                    count-- ;
                }
                // freq[s[j]-'a']--;
                i++ ,j++ ;
            }
        }
        return mx ;
        
    }
};
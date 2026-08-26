class Solution {
public:
    
    string shortestBeautifulSubstring(string s, int k) {

        int n = s.size() ; 
        int i = 0 , j = 0 ; 

        int cnt = 0 ; 
        string ans = "" ; 
        while(j < n ){

            if(s[j] == '1')cnt++ ; 

            while(cnt > k){
                if(s[i] == '1'){
                    cnt-- ; 
                    
                }
                i++ ; 
            }
            
            if(cnt == k){


                while(s[i] == '0'){
                    i++ ; 
                }

                string curr = s.substr(i , j-i+1) ; 

               if(ans == "" || curr.size() < ans.size() || (curr.size() == ans.size() && curr < ans)){
                ans = curr ; 
               }

            } 
            j++ ; 
        }

        return ans ;
        
    }
};
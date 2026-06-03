class Solution {
public:
    int numSplits(string s) {

        set<char>s1 , s2 ; 

        int n = s.size() ; 
        vector<int>prefix(n);
       vector<int>suffix(n) ; 

            
        int cnt = 0 ;
        for(int i = 0 ; i<n ; i++){
            
            char ch = s[i] ; 
            if(s1.find(ch) == s1.end()){
                cnt++ ; 
                s1.insert(ch) ; 
            }
            prefix[i] = cnt ; 
            
        }
        cnt = 0 ;
        for(int i = n-1 ; i>=0 ; i--){
            char ch = s[i] ; 

            if(s2.find(ch) == s2.end()){
                cnt++ ; 
                s2.insert(ch) ; 
            }
            suffix[i] = cnt ; 
        }
        int ans = 0 ; 
        for(int i = 0 ; i<n ; i++){
            int x = prefix[i] ;

            if(i+1 < n){
                int y = suffix[i+1] ; 
                if(x == y){
                    ans++ ; 
                }
            }
        }
        return ans ;

        // prefix -> 1 2 3 4 
        // suffix -> 4  3  2  1
        
    }
};
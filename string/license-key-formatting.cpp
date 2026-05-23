class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string str = "" ; 
        for(char ch: s){
            if(ch != '-'){
                str += toupper(ch) ;
            }
        }
        int count = 0 ;
        string ans = "" ;
        for(int i = str.size() -1 ; i>=0 ; i--){
            if(count == k){
                count = 0 ; 
                ans += '-' ;
            }
            ans += str[i] ; 
            count++ ;
        }
        reverse(ans.begin() , ans.end()) ; 
        return ans ;


        
    }
};
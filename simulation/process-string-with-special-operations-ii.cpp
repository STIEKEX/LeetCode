class Solution {
public:
    char processStr(string s, long long k) {

        int n = s.size() ; 

        string ans = "" ; 

        for(char ch : s){

            if(ch >= 'a' && ch <= 'z'){
                ans += ch ; 
            }

            if(ch == '*' && ans != ""){
                ans.pop_back() ; 
            }

            if(ch == '#'){
                string temp = ans ; 
                ans += temp ; 
            }
            if(ch == '%'){
                reverse(ans.begin() , ans.end()) ; 
            }
        }
        if(ans.size() <= k) return '.' ; 
        return ans[k] ;
    }

};
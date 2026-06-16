class Solution {
public:
    string processStr(string s) {
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
        return ans ;
    }
};
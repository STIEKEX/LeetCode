class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>s ; 

        for(char ch : num){
              
            
            while(!s.empty() && s.top() >ch && k != 0){
                s.pop() ;
                k-- ;
            }
            s.push(ch) ;

        }
        while(!s.empty() && k >0){
            s.pop() ;
            k-- ;
        }
        string ans = "" ;

        while(!s.empty()){
            ans += s.top() ;
            s.pop() ;
        }
        reverse(ans.begin() , ans.end() ) ;
        int idx = 0 ;
        while(idx < ans.size() && ans[idx] == '0'){
            idx++ ;
        }
        if(ans.substr(idx) == "")return "0" ;
        return ans.substr(idx) ;
    }
};
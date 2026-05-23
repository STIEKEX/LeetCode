class Solution {
public:
    string reverseParentheses(string str) {
        stack<char>s ;

        for(char ch : str){
            if(ch == ')'){
                string word = "" ; 
                while(s.top() != '(') {
                    word += s.top() ; 
                    s.pop() ; 
                }
                s.pop() ; 

                for(char val : word){
                    s.push(val) ;
                }
                word = "" ;
            }
            else{
                s.push(ch) ;
            }
        }
        string ans = "" ; 

        while(!s.empty()){
            ans += s.top() ; 
            s.pop() ; 
        }
        reverse(ans.begin() , ans.end()) ;
        return ans ;


        
    }
};
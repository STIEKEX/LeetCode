class Solution {
public:
    int minAddToMakeValid(string str) {

        stack<char>s ;

        for(char ch : str){
            if( !s.empty() && ch == ')' && s.top() == '('){
                
                s.pop() ;;
            }
            else{
                s.push(ch) ;
            }
        }
        return s.size() ;
        
    }
};
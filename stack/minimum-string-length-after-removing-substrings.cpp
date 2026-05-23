class Solution {
public:
    int minLength(string str) {
        stack<char>s ; 

        for(char ch : str){
            if(!s.empty() && s.top() == 'A' && ch == 'B'){
                s.pop() ;
            }
            else if(!s.empty() && s.top() == 'C' && ch == 'D'){
                s.pop() ;
            }
            else{
                s.push(ch) ;
            }
        }
        return s.size() ;
        
    }
};
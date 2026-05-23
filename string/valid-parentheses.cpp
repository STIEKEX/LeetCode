class Solution {
public:
      bool checkOpening(char ch){
        if(ch == '(' || ch == '[' || ch == '{'){
            return true ;
        }
        return false ;
      }


      bool checkClosing(char ch){
        if(ch == ')' || ch == ']' || ch =='}'){
            return true ;
        }
        return false ;
      }
    bool isValid(string s) {
        int n= s.size() ; 
        if(n <=1){
            return false ;
        }
        stack<char> stk ;
        for(char ch : s){
            if(checkOpening(ch)){
                stk.push(ch) ;
            }

            else{
                bool isClose = checkClosing(ch) ;
                if(isClose){
                    if(stk.empty()){
                        return false ;
                    }
                }
                // if{
                    char value= stk.top() ;
                    if( ch == ')'){
                        if(value != '('){
                            return false ;
                        }else{
                            stk.pop() ;
                        }
                    }else if(ch == '}'){
                        if(value !='{'){
                            return false ;
                        }else{
                            stk.pop() ;
                        }
                    }else if(ch == ']'){
                        if(value != '['){
                            return false ;
                        }else{
                            stk.pop() ;
                        }
                    }
                    
                // }
            }   
        }

        if(stk.empty()){
            return true ;
        }
            return false ;
        
        
    }
};
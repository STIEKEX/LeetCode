class Solution {
public:
        int cal(int a , int b , string ch){
            if(ch == "+") return a + b ;
            else if(ch == "-") return a - b ;
            else if(ch == "*") return a * b ; 
            else if(ch == "/") return a/b ; 
            return -1 ;
        }
    int evalRPN(vector<string>& tokens) {
        stack<int>s ;
        for(string& ch : tokens){
            if(ch == "+"|| ch == "-"||ch == "*" || ch == "/"){
                int val2 = s.top() ; 
                s.pop() ; 
                int val1 = s.top() ; 
                s.pop() ;

                s.push(cal(val1 , val2 , ch)) ;
            }else{
                s.push(stoi(ch)) ;
            }
        }

        int ans = s.top() ; 
        return ans ;
        
    }
};
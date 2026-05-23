class Solution {
public:
    string clearDigits(string str) {
        stack<char>s ; 

        for(char ch : str){
            if(ch >='a' && ch  <='z'){
                s.push(ch);
            }
            else{
                s.pop() ;
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
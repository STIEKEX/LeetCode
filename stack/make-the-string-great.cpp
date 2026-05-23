class Solution {
public:
    string makeGood(string str) {
        stack<char>s ; 

        for(char ch : str){
            if(!s.empty() && abs(int(s.top()) - int(ch)) == 32){
                s.pop() ; 
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
        reverse(ans.begin()  ,ans.end()) ; 

        return ans ;
        
    }
};
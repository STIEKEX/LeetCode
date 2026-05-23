class Solution {
public:
    string removeStars(string s) {
        int n = s.size() ;
        stack<int>stk ;
        for(int i = 0 ; i < n ; i++ ){
            if(s[i] == '*'){
                stk.pop() ;
            }else{
                stk.push(s[i]) ;
            }
        }
        string str = "" ;
        while(!stk.empty()){
            str += stk.top() ;
            stk.pop() ;
        }
        reverse(str.begin() , str.end()) ;
        return str ;
    }
   
};
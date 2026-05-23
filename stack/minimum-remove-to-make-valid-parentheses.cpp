class Solution {
public:

    string minRemoveToMakeValid(string s) {
        int n = s.size() ;


        stack<int> stk; 
        vector<bool>invalid(n , false) ;
        for(int i = 0 ; i<n ; i++){

            if(s[i] == '('){
                stk.push(i) ; 
            }

            if(s[i] == ')'){

                if(!stk.empty() ){
                    stk.pop() ; 
                }
                else{
                    invalid[i] = true; 
                }

                
            }
        }
        while(!stk.empty()){
            invalid[stk.top()] = true ;
            stk.pop() ; 
        }
        string ans = "" ; 

        for(int i = 0;  i<n ; i++){
            if(!invalid[i]){
                ans += s[i] ; 

            }
        }
        return ans; 
        
    }
};
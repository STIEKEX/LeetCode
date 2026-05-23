class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char>st ; 

        int i = 0 ; 

        while(i < s.size()) {
            if(s[i] != '#'){
                st.push(s[i]) ; 

            }
            else{
                if(st.size() > 0){
                    st.pop() ; 
                }
                
            }
            i++ ;
        }

        string s1 = "" ; 

        while(!st.empty()){
            s1 += st.top() ; 
            st.pop() ; 
        }

        int j = 0 ; 

        while(j<t.size()){
            if(t[j] != '#'){
                st.push(t[j]) ;
            }
            else{
                if(st.size() > 0){
                     st.pop() ; 
                }
               
            }
            j++ ;
        }

        string s2 = "" ; 


        while(!st.empty()){
            s2 += st.top()  ; 
            st.pop() ; 
        }


        return s1 == s2 ; 
        
        
    }
};
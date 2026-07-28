class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size() == 1) return s ; 
        unordered_map<char ,int>m ; 
        set<char>st ; 
        for(char ch : s){
            m[ch]++ ; 
            st.insert(ch) ; 
        }
        string ans = "" ;
        for(char val : st){
           ans += val ; 
        }
        string temp = ans ; 
        reverse(temp.begin() , temp.end())  ;
        int last = ans.size() -1 ; 
        if(m[ans[last]]% 2 == 1){
            ans += ans[last] ; 
        }
        ans += temp ; 
        return ans ;

       
        return ans ;



    }
};
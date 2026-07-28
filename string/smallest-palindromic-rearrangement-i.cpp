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
           m[val]-- ;  
        }
        string temp = ans ; 
        reverse(temp.begin() , temp.end())  ;
        int j = temp.size()-1 ;

        while(j >= 0){
            int val = m[ans[j]] ; 
            while(val != 0){
                ans += ans[j] ; 
                val-- ;
            }
            j-- ;
        }

       
        return ans ;



    }
};
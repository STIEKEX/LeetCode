class Solution {
public:
    bool validPalindrome(string s) {
        //  

        unordered_map<char ,int>m ; 

        for(char ch : s){
            m[ch]++ ; 
        }

        int count =0 ; 

        for(auto val : m){
            if(val.second % 2 == 1){
                count++ ; 
            }
        }

        int n = s.size() ; 

       if(n % 2 == 1 && count == 1) return true ; 
       if(n % 2 == 0 && count == 2) return true ;
        return false ;
        
        
    }
};
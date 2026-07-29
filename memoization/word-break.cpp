class Solution {
public:
    bool solve(int i , string s , vector<string>&d){
        if(i == s.size()) return true ;

        string temp = "" ; 
        for(int j = i ; j<s.size() ; j++){
            temp += s[j] ; 

            if(find(d.begin() , d.end() , temp) != d.end() && solve(j+1 , s , d)){
                return true ;
            }
        }
        return false ;
    }
    bool wordBreak(string s, vector<string>& d) {
        return solve(0 , s  ,d) ; 
        
       
        
    }
};
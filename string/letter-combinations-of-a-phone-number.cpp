class Solution {
public:    
        vector<string>ans   ;


    void solve(int idx , string& digits ,vector<string>&letter , string& temp ){

        if(idx == digits.size()){
            ans.push_back(temp) ; 
            return ;
        }

        int dig = digits[idx] - '0' ;
        string str =  letter[dig] ;

        for(int i = 0 ; i <str.size() ; i++){
           temp.push_back(str[i]);
            solve(idx+1 , digits , letter , temp) ; 
            temp.pop_back() ; 
        }

    }
    vector<string> letterCombinations(string digits) {

        vector<string>letter = {"" , "" , "abc" , "def" ,"ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz" } ;
        string temp = "" ;
        solve(0 , digits , letter  , temp) ; 
        return ans; 

        
    }
};
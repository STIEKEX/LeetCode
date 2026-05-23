class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(string val : words){

            string rev = val ; 
            reverse(rev.begin() , rev.end()) ;
            if(rev == val) return val ;
        }
        return "" ;
    }
};
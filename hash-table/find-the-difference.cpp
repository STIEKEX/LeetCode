class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch = 0 ; 

        for(char val : s){
            ch ^= val;
        }
        for(char val : t){
            ch ^= val ;
        }
        return ch ;
    }
};
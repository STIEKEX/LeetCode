class Solution {
public:
    char repeatedCharacter(string s) {
        vector<char>seen(500, false) ; 

        for(char val : s){
            if(seen[val-'a']){
                return val ;
            }
            seen[val - 'a'] = true ;
        }
        return 'a';




    }
};
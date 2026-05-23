class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {

        string ans = "" ;

        int i = 0 ; 
        int j = 0 ;
        for(char ch :s){
            if(i < spaces.size() && j == spaces[i]){
                ans += ' ' ;
                i++ ;
            }
            ans += ch ;
            j++ ;
            
        }
        return ans ;
        
    }
};
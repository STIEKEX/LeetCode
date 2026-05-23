class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = ""   ;
        string s2 = "" ;

        for(string str : word1){
            for(char ch : str){
                s1 += ch ;
            }
        }

        for(string str : word2){
            for(char ch : str){
                s2 += ch ;
            }
        }
        return s1 == s2 ;
        
    }
};
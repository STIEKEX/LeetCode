class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size() ; 

        unordered_map<char , int>m ; 

        for(char ch : word){
            m[ch]++ ;
        }

        int count = 0 ; 

        for(auto ch : m){

            if(ch.first >= 'a' && ch.first <= 'z'){
                if(m.find(toupper(ch.first)) != m.end()){
                    count++ ; 
                }
            }
        }
        return count  ; 
        
    }
};
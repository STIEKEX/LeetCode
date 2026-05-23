class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false ;
        }
        
        unordered_map<char , int > m1 , m2 ; 
        for(char val : s){
            m1[val]++ ;
        }

        for(char val : t){
            m2[val]++ ;
        }

        return m1 == m2 ;
    }
};
class Solution {
public:

    bool isvowel(char ch ){
        if(ch == 'a'||ch == 'A'||ch == 'e'||ch == 'E'||ch == 'i'||ch == 'I'||ch == 'o'||ch == 'O'||ch == 'u'||ch == 'U'){
            return true; 
        }
        return false ;
    }
    string sortVowels(string s) {
        int n = s.size() ;

        vector<char> vow ;
        for(int i=0 ; i<n ; i++){
            if(isvowel(s[i])){
                vow.push_back(s[i]) ;
            }
        }
        sort(vow.begin() , vow.end()) ;

        int j=0 ; 
        for(int i=0 ; i<n ; i++){
            if(isvowel(s[i])){
                swap(vow[j], s[i]) ;
                j++ ;
            }
        }



        return s ;
        
    }
};
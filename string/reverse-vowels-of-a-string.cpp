class Solution {
public:
        bool isvowel(char ch ){
        if(ch == 'a'||ch == 'A'||ch == 'e'||ch == 'E'||ch == 'i'||ch == 'I'||ch == 'o'||ch == 'O'||ch == 'u'||ch == 'U'){
            return true; 
        }
        return false ;
    }
    string reverseVowels(string s) {
        int n = s.size() ; 
        int i= 0 ; 
        int j = n-1 ; 
        while(i<j) {
            if(isvowel(s[i]) && isvowel(s[j])){
                swap(s[i], s[j]) ;
                i++ ;
                j--;
            }
            else if(isvowel(s[i])){
                j-- ;
            }
            else if(isvowel(s[j])){
                i++ ;
            }else{
                i++ ;
                j-- ;
            }
        
        }
        return s; 
        
    }
};
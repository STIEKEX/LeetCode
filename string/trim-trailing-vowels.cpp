class Solution {
public:
        bool check(char ch){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                return true ;
            }
            return false ;
        }
    string trimTrailingVowels(string s) {

        int n = s.size() - 1;  

        int i = n ; 

        while(i>= 0 && check(s[i])){
            s.erase(i ,1) ;
            i-- ;
        }
        return s ;
    }
};
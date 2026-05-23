class Solution {
public:
    bool doesAliceWin(string s) {
        if(s.size() ==0){
            return false ;
        }
        int count = 0 ;
        for(char ch :s){
            if(ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch =='u'){
                count++ ;
            }
        }
        if(count ==0){
            return false ;
        }
        if(count%2 !=0){
            return true ;
        }
        return true ;
        
    }
};
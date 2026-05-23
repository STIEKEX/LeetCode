class Solution {
public:
    bool checkRecord(string s) {
        int n = s.size() ; 
        int late = 0 ; 
        int absent = 0 ;
        
        for(char ch : s){
            if(ch == 'A'){
                absent++ ; 
            }
            
        }
        bool isabsent = false ;
        bool islate = false ;
        if(absent >= 2){
            isabsent = true ;
        }
        
            for(int i = 2 ; i<n ; i++){
                if(s[i] == 'L' && s[i-1] == 'L' && s[i-2] == 'L'){
                    islate = true ;
                    break ;
                }
            }
        if(isabsent || islate){
            return false ;
        }
        
        return true ;
    }
};
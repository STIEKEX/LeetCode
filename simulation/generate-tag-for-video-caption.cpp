class Solution {
public:
    string generateTag(string caption) {

        string ans = "" ; 
        ans += '#';

        int n = caption.size() ; 

        int i = 0 ; 
        while(caption[i] == ' '){
            i++ ;
        }
        if(i<n){
        ans += tolower(caption[i]) ;
        }
        bool isspace = false ;

        for(int j = i+1 ; j<caption.size()  ; j++){
            if(ans.size() == 100){
                break ;
            }

                if(caption[j] == ' '){
                    isspace = true ;
                    continue ;


                }
                if(isspace && caption[j] != ' '){
                    ans += toupper(caption[j]) ; 
                    isspace = false ;
                    continue ;
                }
                if(caption[j] != ' '){
                    ans += tolower(caption[j]) ;
                }

        }
        
        return ans ;
        
    }
};
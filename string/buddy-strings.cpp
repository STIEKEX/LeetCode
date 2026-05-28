class Solution {
public:
    bool buddyStrings(string s, string goal) {

        bool same = true  ;
        char a = s[0] ;
        for(char ch : s){
            if(ch != a){
                same = false ;
            }
        }
        if(same) return true ;

        if(s == goal) return false; 

        int n = s.size() ;

        int i = 0 , j = 0 ;

        while(i < n){

            if(s[i] != goal[j]){
                int k = i+1 ; 

                while(k <n ){
                    if(s[k] == goal[j]){
                        swap(s[k] , s[i]) ; 
                        break ; 
                    }
                    k++ ;
                }
            }
            i++ , j++ ; 
        }
        return s == goal ; 


        
    }
};
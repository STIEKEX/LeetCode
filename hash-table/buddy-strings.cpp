class Solution {
public:
    bool buddyStrings(string s, string goal) {

        bool same = true  ;
        char a = s[0] ;
        // for(char ch : s){
        //     if(ch != a){
        //         same = false ;
        //     }
        // }
        // if(same) return true ;

        unordered_map<char ,int>m ;

        for(char ch : s){
            m[ch]++ ; 
        }

        for(auto val : m){
            if(val.second % 2 == 1){
                same = false ;
                break ;
            }
        }
        if(same) return true ;



        if(s == goal) return false; 
        // sort(s.begin() , s.end()) ;
        // sort(goal.begin() , goal.end()); 
        // return s == goal ;

        int n = s.size() ;

        int i = 0 , j = 0 ;
        bool happen = false ; 
        while(i < n){
            
            if(s[i] != goal[j]){
                int k = i+1 ; 

                while(k <n ){
                    if(s[k] == goal[j]){
                        swap(s[k] , s[i]) ; 
                        happen = true ;
                        break ;
                       
                    }
                    k++ ;
                }
            }
            if(happen) break ;
                
            
            i++ , j++ ; 
        }
        return s == goal ; 


        
    }
};
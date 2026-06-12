class Solution {
public:
    string predictPartyVictory(string s) {
        
        queue<char>q ; 
        int n = s.size() ; 

        int count = 0 ; 
        for(char  ch : s){
            q.push(ch) ; 
        }
        while(q.size() != 1){
            if(count > 1000) break ; 
            char a = q.front() ;
            q.pop() ; 

            char b = q.front() ; 
            if(a != b){
                q.pop() ;
                count-- ;   
            }
            count++ ; 
            q.push(a) ; 
        }
        if(q.front() == 'R'){
            return "Radiant" ;
        }
        return "Dire" ; 
    }
};
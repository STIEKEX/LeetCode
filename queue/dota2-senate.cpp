class Solution {
public:
    string predictPartyVictory(string s) {
        
        queue<char>q ; 
        int n = s.size() ; 


        for(char  ch : s){
            q.push(ch) ; 
        }
        while(q.size() != 1){
            char a = q.front() ;
            q.pop() ; 

            char b = q.front() ; 
            if(a != b){
                q.pop() ; 
                 
            }
            q.push(a) ; 
        }
        if(q.front() == 'R'){
            return "Radiant" ;
        }
        return "Dire" ; 
    }
};
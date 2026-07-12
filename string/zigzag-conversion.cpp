class Solution {
public:
    string convert(string s, int row) {
        
        if(row <= 1 || s.empty()) return s; 
        vector<string>grid(row) ;

        int i = 0 ;
        int dir = 1 ;
        for(char ch : s){
           
           grid[i] += ch ; 

           if(i == 0) {
            dir = 1 ; 
           }
           else if(i == row-1){
            dir = -1 ; 
           }
           i += dir ; 
        }
        string ans = "" ; 

        for(string val : grid){
            ans += val ;
        }
        return ans ;

        
    }
};
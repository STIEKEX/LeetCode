class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
       string str; 

        int n = words.size() ; 
        int j= 0;
        for(int i=0 ; i<n ; i++){
            str += words[i][j] ;
            
        }
        if(str == s){
            return true ;
        }
        return false ;
        
    }
};
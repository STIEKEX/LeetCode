class Solution {
public:

    bool rotateString(string s, string goal) {

        if(s.size() != goal.size()){
            return false ;
        }
        string str = s+s ;
        int idx = str.find(goal) ;
        if(idx != string::npos){
            return true ;
        }
        return false ;


        
    }
};
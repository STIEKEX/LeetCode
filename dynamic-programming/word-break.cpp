class Solution {
public:
    bool wordBreak(string s, vector<string>& d) {
        unordered_map<string ,int>m ; 
        for(string val : d){
            m[val]++ ; 
        }

        string temp = "" ; 
        for(char ch : s){
            temp += ch ; 
            if(m.find(temp) != m.end()){
                temp = "" ; 
            }

        }
        if(temp != ""){
            return false; 
        }
        return true ;
        
    }
};
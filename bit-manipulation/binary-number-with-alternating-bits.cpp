class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32> b(n) ;
        string str = b.to_string() ;

        str = str.substr(str.find('1')) ;
        
        for(int i = 1 ; i<str.size() ; i++){
            if(str[i] == str[i-1]){
                return false ;
            }
        }
        return true ;
        
    }
};
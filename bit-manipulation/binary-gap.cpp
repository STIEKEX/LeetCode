class Solution {
public:
    int binaryGap(int n) {

        int count = 0 ; 

        bitset<32> b(n) ;

        string str = b.to_string() ;
        str = str.substr(str.find('1')) ;
        int k = 0 ;
        for(int i = 1 ; i<str.size() ; i++){
            if(str[i] == '1'){
                count  = max(count , i- k) ;
                k = i ;
            }
        }
        return count ;
        
    }
};
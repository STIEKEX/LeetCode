class Solution {
public:
    int findComplement(int n) {
        if(n == 0) return 1 ;

        bitset<32> b(n) ;

        string str = b.to_string() ;

        str = str.substr(str.find('1'))  ;

        for(int i = 0 ; i<str.size() ; i++){

            if(str[i] == '1'){
                str[i] = '0' ;
            }
            else{
                str[i] = '1' ;
            }
        }
        bitset<32> d(str) ;

        int ans = d.to_ulong() ;
        return ans ;
        
    }
};
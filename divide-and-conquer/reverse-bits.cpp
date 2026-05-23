class Solution {
public:
    int reverseBits(int n) {

        bitset<32> b(n) ;

        string str = b.to_string() ;
        reverse(str.begin() , str.end()) ;

        bitset<32> d(str) ;

      int num =   d.to_ullong() ;
      return num ;


        
    }
};
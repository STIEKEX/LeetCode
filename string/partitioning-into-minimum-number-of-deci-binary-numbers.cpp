class Solution {
public:
    int minPartitions(string n) {
        int val = 0 ;
        for(char ch: n){
             val = max(val , (ch - '0')) ;
        }
        return val ;
    }
};
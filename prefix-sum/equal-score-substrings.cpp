class Solution {
public:
    bool scoreBalance(string s) {

        int n = s.size() ; 
        int l = 0 ; 
        int r = n-1 ; 

        int lsum   = 0 ; 
        int rsum = 0 ; 

        while(l <= r){
            if(lsum < rsum){
                lsum += s[l] -'a' + 1 ; 
                l++ ;
            }else{
                rsum += s[r] - 'a' + 1 ; 
                r-- ;
            }
        }

        return lsum == rsum ;
        
    }
};
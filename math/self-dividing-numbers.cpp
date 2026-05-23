class Solution {
public:
        bool check(int digit){
           int original = digit ;
            while(digit != 0){
               
                int rem  = digit % 10 ;
                digit = digit/10 ; 
                if(rem == 0 || original % rem != 0){
                    return false ;
                }
            }
            return true ;
        }
        
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int>ans  ;
        for(int i = left ; i<=right ; i++){
            if(check(i)){
                ans.push_back(i) ;
            }


        }
        return ans ;
    }
};
class Solution {
public:
    bool isPerfectSquare(int num) {
       
       long long st = 1 ; 
       long long end = num ; 

       while(st <= end){
        long long mid = st + (end- st)/2 ;

        long long val = mid*mid ; 
        if(val == num){
            return true ;
        }
        else if(val < num){
            st = mid+1 ; 
        }
        else{
            end = mid-1 ;
        }
       }
       return false ;
    }
};
class Solution {
public:
    int mySqrt(int x) {
        long long st = 0 ; 
        long long end = x; 

        while(st<=end){
            
            long long  mid = st + (end -st)/2; 
            long long  val = mid* mid ; 

            if(val == x)return mid ; 

            else if(val < x){
                st = mid+1; 
            }
            else{
                end = mid-1 ;
            }
        }
        return int(st-1) ;
        
    }
};
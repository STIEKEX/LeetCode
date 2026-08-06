class Solution {
public:
    int smallestNumber(int n, int t) {
        
       
        
        while(true){
            int temp =  n ; 
            int curr = 1 ; 

            while(temp != 0){
                int rem = temp % 10 ; 
                if(rem == 0) return n ; 
                curr *= rem ; 
                temp /=10  ;

            }
            if(curr % t == 0){
                return n ;
            }
            else{
                n++ ; 
            }


        }
        return -1 ; 
    }
};
class Solution {
public:
        bool prime(int n ){
            if(n <=1 ) return false ;

            for(int i = 2 ; i*i<=n ; i++){
                if(n % i == 0) return false ;
            }
            return true; 
        }
    int minOperations(vector<int>& nums) {
        
        int op = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){

            if(i % 2 == 0){
                int val = nums[i] ;
                while(!prime(val)){
                    val++ ; 
                    op++ ;
                }
            }
            if(i % 2 == 1){
                int val = nums[i] ; 

                while(prime(val)){
                    op++ ; 
                    val++ ;
                }
            }
        }
        return op ; 
        
    }
};
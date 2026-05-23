class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool first = true ; 
        bool second = false ;

        int firstSum = 0 ; 
        int secondSum = 0 ; 

        
        int count  = 6 ;
        
        for(int i = 0 ; i < nums.size()  ; i++){
            if(i == count-1){
                if(first == true && second == false){
                    first = false ;
                    second = true ;
                }
                else if(first == false && second == true ) {
                    first = true ;
                    second = false ;
                }
                count += 6 ;
                
                
            }
            if(nums[i] % 2 != 0) {
                if(first == true && second == false){
                    first = false ;
                    second = true ;
                    secondSum += nums[i] ;
                }
                else if (first == false && second == true){
                    first = true ; 
                    second = false ;
                    firstSum += nums[i] ;
                }

                     // secondSum += nums[i] ;
            }
            else{
                if(second == true){
                    secondSum += nums[i] ;
                }
                else if(first == true){
                    firstSum += nums[i] ;
                }
            }
            
            
        }
        // if(first == true){
        //     firstSum += nums[nums.size() -1] ; 
            
        // }
        // if(second == true){
        //     secondSum += nums[nums.size() - 1] ;
        // }

        return  firstSum - secondSum ;
        
        
    }
};
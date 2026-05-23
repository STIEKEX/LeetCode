class Solution {
public:
    bool isOneBitCharacter(vector<int>& nums) {
        int size = nums.size() ; 
        int n = nums.size() ;

        
        int i = 0 ; 
        while(i < size){
            if(n == 1){
                return true ; 
            }
            if(nums[i] == 0){
                i++ ; 
                n = n-1 ; 
            }else{
                i = i+2 ;
                n = n-2 ;
            }
        }
        return false ;
        
    }
};
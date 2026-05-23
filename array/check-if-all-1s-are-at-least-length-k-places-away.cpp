class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size() ;
        int ones = 0 ; 
        for(int i = 0 ; i<n ; i++){
            if(nums[i] ==1){
                ones++ ;
            }
        }
        if(ones <= 1 ){
            return true ; 
        }
        
        bool distance = false   ;
        int count = 0 ;
        for(int i = 0 ; i<n ; i++){
            if(nums[i] == 1){
                if(count >= k){
                    distance = true   ;
                }else{
                    distance = false  ;
                }
                count = 0 ;
            }
            else {
                count++ ;
            }
        }
        return distance ;

    }
};
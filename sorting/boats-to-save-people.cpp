class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {

        int n = nums.size() ; 
        
        sort(nums.begin() , nums.end()) ;

        int i = 0 , j = n-1 ; 

        int boats = 0 ;
        while(i<=j ){

            if(nums[i] + nums[j] <= limit){
                i++ ;
            }
            j-- ;
            boats++ ;

        }
        return boats ;
        
        
    }
};
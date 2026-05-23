class Solution {
public:
    int minMoves(vector<int>& nums) {
        int largest = 0 ; 

        int n = nums.size() ; 
        for(int i = 0 ; i<n ; i++){
            if(nums[i] > largest){
                largest = nums[i] ;
            }
        }
        int op = 0 ; 

        for(int i = 0 ; i<n ; i++){
           while(nums[i] != largest){
               nums[i]++ ;
               op++ ;
           }
        }
        return op ;
        
    }
};
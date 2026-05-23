class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int totalsum = 0 ; 
        int n = nums.size() ; 
        int evensum = 0 ; 
        int oddsum = 0 ; 
        for(int i = 0 ; i<n ; i++){
            if(i%2==0){
                evensum += nums[i] ;
            }else{
                oddsum += nums[i] ;
            }
        }
        totalsum = evensum - oddsum ;
        
        return totalsum ;
        
    }
};
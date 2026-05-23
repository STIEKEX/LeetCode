class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum = 0 ;

        for(int val : nums){
            totalSum += val ;
        }

        int count = 0 ; 
        int num = 0 ; 
        for(int i = 0 ;  i<nums.size()- 1; i++){
            num += nums[i] ;
           int n = totalSum - num ;
           int val = num - n ;
           if(val % 2 == 0){
            count++ ;
           }
        }
        return count ;
    }
};
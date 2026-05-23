class Solution {
public:
    int pivot(vector<int>&nums , int st , int end){
        while(st < end){
            while(st < end && nums[st] == nums[st+1]) st++ ; 
            
            while(st < end && nums[end] == nums[end-1]) end-- ; 

            int mid = st + (end -st) /2 ;

            if(nums[mid] > nums[end]) st = mid+1 ; 

            else{
                end = mid ;
            }
        }
        return st ; 
    }
    int findMin(vector<int>& nums) {
        int st = 0 , end = nums.size() -1; 

        return nums[pivot(nums , st , end)] ; 
    }
};
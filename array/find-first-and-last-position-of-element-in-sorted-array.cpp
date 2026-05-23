class Solution {
    private:
    int first = -1 ; 
    int second = -1 ; 
public:
        void firstOccurance(vector<int>&nums , int st , int end , int target){
            if(st > end){
                return ;
            }
            int mid = st + (end- st )/2 ; 

            if(nums[mid]== target){
                first = mid ; 
                firstOccurance(nums , st , mid-1 , target) ;
            }
            else if(nums[mid] < target){
                firstOccurance(nums,  mid+1 , end , target) ;

            }
            else{
                firstOccurance(nums ,st , mid-1 , target) ;
            }
        }




        void secondOccurance(vector<int>&nums , int st , int end , int target){
            if(st > end){
                return ;
            }
            int mid = st + (end- st )/2 ; 

            if(nums[mid]== target){
                second = mid ; 
                secondOccurance(nums , mid+1 , end , target) ;
            }
            else if(nums[mid] < target){
                secondOccurance(nums,  mid+1 , end , target) ;

            }
            else{
                secondOccurance(nums ,st , mid-1 , target) ;
            }
        }

    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0 , end = nums.size() -1 ; 

        firstOccurance(nums , st , end , target) ; 
        secondOccurance(nums , st , end , target) ; 

        vector<int>ans ; 
        ans.push_back(first) ; 
        ans.push_back(second)  ;
        return ans ; 

        
    }
};
class Solution {
public:
    int findPivot(vector<int>&nums , int st , int end){
        while(st < end){
        while(st < end && nums[st] == nums[st+1]) st++ ; 

        while(st < end && nums[end] == nums[end-1]) end-- ; 

        int mid = st + (end -st )/2 ; 

        if(nums[mid] > nums[end]){
            
            st = mid+1 ; 
        }
        else{
            end = mid ;
        }
        }
        return st ; 
    }
    bool bs(vector<int>&nums , int st , int end , int target){
        
        while(st <=end){
            int mid = st + (end- st)/2 ; 

            if(nums[mid] == target) return true ;

            if(nums[mid] < target){
                st = mid+1 ;
            }
            else{
                end = mid-1; 
            }
        }
        return false; 
    }
    bool search(vector<int>& nums, int target) {

        int st = 0 , end = nums.size() -1 ; 

        int pivot = findPivot(nums , st , end) ; 

        if(bs(nums, st , pivot-1 , target)) return true ; 

        return bs(nums , pivot , end , target) ; 
        
    }
};
#include <numeric>
class Solution {
public:
    bool valid(int mid , vector<int>&nums , int k){

        int sum = 0 , cnt = 1 ;
        for(int i = 0 ; i<nums.size() ; i++){
            if(sum + nums[i] <= mid){
                sum += nums[i] ; 
            }
            else{
                sum = nums[i] ; 
                cnt++ ; 
            }
        }
        if(cnt > k) return false ;
         return true ;
    }
    int splitArray(vector<int>& nums, int k) {

        int n = nums.size() ; 

        int st = 0  ;

       int end = 0 ;
       for(int val : nums){
        end += val ; 
        st = max(st , val) ; 
       }
        int ans = 0 ;
        while(st <= end){
            int mid  = st +(end- st)/2 ; 
            
           
            if(valid(mid , nums , k)){
                ans = mid ; 
                end = mid-1;
            }
            else{
                st = mid+1; 
            }
        }
        return ans ;
        
    }
};
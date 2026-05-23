class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size() ; 

        for(int i=0 ; i<n ; i++){
            if(nums[i]%2==0){
                nums[i] = 0 ;
            }else {
                nums[i] = 1 ;
            }
        }
        int st = 0 , end= n-1 ;
       while(st<end){
        if(nums[st] == 0) st++ ; 
        else if (nums[end] == 1) end-- ; 
        else {
            swap(nums[st], nums[end]) ;
        }
       }
        return nums ;
        
    }
};
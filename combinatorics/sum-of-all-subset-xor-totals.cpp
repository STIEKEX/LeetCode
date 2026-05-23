class Solution {
public:
    vector<int>arr ; 
    int sum = 0 ; 
    void solve(int n ,vector<int>&nums){
        if(n < 0){
            int xr = 0 ;
            for(int val : arr){
                xr ^= val ;
            }
            sum += xr ; 
            return ;
        }
        arr.push_back(nums[n]) ; 
        solve(n-1 , nums) ; 
        arr.pop_back() ; 
        solve(n-1 , nums) ; 
    }
    int subsetXORSum(vector<int>& nums) {
        int  n = nums.size() ; 
        solve(n-1 , nums) ; 
        return sum ;
       
    }
};
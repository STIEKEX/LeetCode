class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Product of array except itself = product of everything on my left × product of everything on my right

        int n = nums.size() ; 
        vector<int>ans(n , 1) ; 

        for(int i = 1 ; i<n ; i++){
            ans[i] = ans[i-1] * nums[i-1] ; 
        }

        int suf = 1 ;
        for(int j = n-2 ; j>=0 ; j--){
            suf *= nums[j+1] ; 
            ans[j] *= suf ; 
        }
        return ans ;
        
    }
};
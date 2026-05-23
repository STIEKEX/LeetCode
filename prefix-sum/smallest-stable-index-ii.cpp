class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size() ; 

        int mx = nums[0] ; 
    
        
        vector<int>mn(n) ;
        mn[n-1] = nums[n-1] ; 
        int mni = nums[n-1] ; 
        for(int i = n-2 ; i>= 0 ; i--){
            mni = min(mni , nums[i]) ;
            mn[i] = mni ;
            
        }

        for(int i = 0 ; i<n ; i++){
            mx = max(mx, nums[i]) ; 
            mni = mn[i] ; 

            int val = mx - mni ;
            if(val <= k){
                return i ;
            }
        }
        return -1 ;
    }
};
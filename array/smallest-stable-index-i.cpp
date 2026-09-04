class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size() ; 


        int res = INT_MAX ; 

        vector<int>suffix(n ) ; 
        suffix[n-1 ] = nums[n-1] ; //min ; 

        for(int i = n-2 ;i>= 0 ; i--){
            suffix[i] = min(nums[i] , suffix[i+1]) ; 
        }

        int mx  =INT_MIN ; 

        for(int i = 0 ; i<n ; i++){
            mx = max(mx , nums[i]) ; 

            if(mx - suffix[i] <= k){
                return i ; 
            }
        }
        return -1 ;
        
    }
};
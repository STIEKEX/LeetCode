class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size() ; 

        int mx = nums[0] ;

        
        

        int idx = -1 ;
        for(int i = 0 ; i<n ; i++){

            mx = max(mx , nums[i]) ; 
            int mn = INT_MAX ; 

            for(int k = i ; k<n ; k++){
                mn = min(mn , nums[k]) ; 
            }
            int val = mx - mn ; 
            if(val <= k ){
                return i ; 
            }
        }
        return idx; 

        
        
    }
};
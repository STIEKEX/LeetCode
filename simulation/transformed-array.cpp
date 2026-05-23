class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
       
       int n = nums.size() ; 

        vector<int>ans(n) ;
        for(int i = 0 ; i<n ; i++){
            int val = nums[i] ;

            if(val >= 0){
                int idx = ( i + val) % n ;
                ans[i] = nums[idx] ;
            }
            else{
                int idx = (i - (abs(val) % n) + n) % n ;
                ans[i] = nums[idx] ;
            }
            
        
        }
        return ans; 
       
    }
};
class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& q) {

        int n = nums.size() ; 

        // vector<int>ans(n) ;

        for(int i = 0 ; i<q.size() ; i++){
            int l = q[i][0] ; 
            int r = q[i][1] ; 
            int k = q[i][2] ; 
            int v = q[i][3] ; 

            int idx = l ;

            while(idx <= r){
                long long temp = nums[idx] ;
                nums[idx] = (temp * v) % (int)(1e9 + 7) ; 
                idx += k ; 
            }
        }

        int xr = 0 ; 
        
        for(int val : nums){
            xr ^= val ;
        }
        return xr ;
        
    }
};
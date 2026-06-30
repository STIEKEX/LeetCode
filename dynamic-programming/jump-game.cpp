class Solution {
public:

    bool canJump(vector<int>& nums) {
        int n =  nums.size() ; 
        int idx = 0 ;
        int op = 0 ; 

        int i = 0 ; 
        while(i < n){
            if(op == 100000) return false ;
            if(i == n-1) return true ; 
            i += nums[i];
            op++ ; 

        }
        return false ;
        
        
    }
};
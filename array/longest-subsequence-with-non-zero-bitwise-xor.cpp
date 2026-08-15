class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        bool zero = true ; 
        int cnt = 0 ; 
        for(int val : nums){
            cnt ^= val ; 
            if(val != 0) zero = false ;
        }
        if(zero) return 0 ; 
        if(cnt == 0) return nums.size()-1 ; 
        return nums.size() ; 


        
        
    }
};
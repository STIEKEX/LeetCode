class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans ; 
        int curr = 0 ;
        for(int val : nums){
            curr = ((curr << 1) + val)% 5 ;
            if(curr % 5 == 0){
                ans.push_back(true) ;
            }else{
                ans.push_back(false) ;
            }
        }
        return ans ;
    }
};
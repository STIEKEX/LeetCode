class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {

        unordered_map<int ,int>m ;

        for(int val : nums){
            m[val]++ ;
        }
        int ans = -1 ;

        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] % 2 == 0 && m[nums[i]] ==1){
                ans = nums[i] ;
                break ;
            }
        }
        return ans ;
        
    }
};
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>arr = nums ; 
        reverse(arr.begin() , arr.end()) ; 
         nums.insert(nums.end() , arr.begin() , arr.end())  ;
        return nums ; 
        
        
    }
};
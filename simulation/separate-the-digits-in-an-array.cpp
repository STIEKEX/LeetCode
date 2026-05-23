class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans ;
         int n = nums.size() ; 

         for(int i = 0 ; i<n ; i++){
            string str = to_string(nums[i]) ; 

            for(char val : str){
                ans.push_back(val - '0') ; 
            }

            
         }
         return ans; 
        
    }
};
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>temp ; 

      

        for(int val : nums){
            
            if(temp.empty() || temp.back() % val == 0 || val % temp.back() == 0){
                temp.push_back(val) ; 
            }

          
        }
        return temp ; 
        
    }
};
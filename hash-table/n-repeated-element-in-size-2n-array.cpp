class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() ; 
        
        unordered_map<int ,int > m ;
        
        for(int val : nums){
            m[val]++  ;
        }
        
        for(auto val : m){
            if(val.second >= n/2){
return val.first  ;
                }
        }
        return -1 ;
        
    }
};
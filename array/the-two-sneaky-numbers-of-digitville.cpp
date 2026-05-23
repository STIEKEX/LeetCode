class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int ,int > m ; 

        for(int val : nums){
            m[val]++ ;
        }
        vector<int>ans ; 
        for(auto val : m){
            if(val.second > 1){
                ans.push_back(val.first) ; 
            }
        }
        return ans ;
        
    }
};
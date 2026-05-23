class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m ;
        int n = nums.size() ;
        for(int val : nums){
            m[val]++ ;
        }
        vector<int>ans ;

        for(auto val : m ){
            if(val.second > n/3){
                ans.push_back(val.first) ;
            }
        }
        return ans ;
        
    }
};
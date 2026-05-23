class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size() ; 
        unordered_map<int, int> m ;
        for(int val : nums) {
            m[val]++ ;
        }
        int ans= 0;
        for(auto no : m){
            if(no.second > n/2) {
                ans = no.first ;
            }
        }
        
        return ans ;
    }
};
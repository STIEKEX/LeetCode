class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        
        unordered_map<int ,int>m ; 
        int mn = INT_MAX ;
        for(int i = 0 ; i<nums.size() ; i++){
            int val = nums[i] ; 
            string str = to_string(val) ; 
            reverse(str.begin() , str.end()) ; 

            int v2 = stoll(str) ; 

            if(m.find(nums[i]) != m.end()){
                mn = min(mn , abs(m[nums[i]] - i)) ;
            }

            m[v2] = i ;
        }
        if(mn == INT_MAX) return -1 ; 
        return mn ; 
    }
};
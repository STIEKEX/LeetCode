class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>s ; 
        for(int val : nums){
            if(val != 0){
                s.insert(val) ;
            }
        }
        return s.size() ; 
        
    }
};
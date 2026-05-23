class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size() ; 
        unordered_map<int,int>m ; 
        for(int i=0 ; i<n ;i++){
            int value = nums[i] ; 
            if(m.find(value) !=m.end()){
                return true ; 

            }
            m[value] = i ; 
        }
        return false ; 
      
        
    }
};
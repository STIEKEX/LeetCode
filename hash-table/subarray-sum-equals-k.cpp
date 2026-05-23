class Solution {
public:
        
    int subarraySum(vector<int>& nums, int k) {
        
        vector<int>prefix(nums.size() , 0) ; 
        prefix[0] = nums[0] ;
        for(int i = 1 ; i<nums.size() ; i++){
            prefix[i] = prefix[i-1] + nums[i] ;
        }

        unordered_map<int ,int> m ; 
        int count = 0 ;
        for(int i = 0 ; i<nums.size() ;i++){
            int val = prefix[i] - k ;
            if(prefix[i] == k) count++ ;
            
            

            if(m.find(val) !=m.end()){
                count += m[val] ;
            }
            m[prefix[i]]++ ;
        }
        return count ; 

        

        
    }
};
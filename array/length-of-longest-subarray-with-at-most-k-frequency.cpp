class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size() ; 

        int mx = INT_MIN ; 


        int i = 0  ;
        int j = 0 ; 

        unordered_map<int ,int>m ; 

        while(j < n){
            int val = nums[j]  ;

            m[val]++ ;; 

            if(m[val] > k){
                while(i < j && m[val] > k){
                    m[nums[i]]-- ; 
                    i++ ; 
                }
            }
            mx = max(mx , j-i+1) ; 
            j++ ; 
        }
        return mx ; 


        
        
    }
};
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size() ;
        int originalsum = n*(n+1) /2 ;
        unordered_map<int , int> m ; 
        vector<int>ans ;
        for(int val : nums){
            m[val]++ ;
        }
        for(auto val : m){
            if(val.second > 1){
                ans.push_back(val.first) ;
            }
        }
        int sum = 0 ;
        for(int i = 0 ; i<n; i++){
            sum += nums[i] ;
        }
        
        ans.push_back(ans[0] + (originalsum - sum)) ;
        return ans ;

        
    }
};
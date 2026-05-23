class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {

        sort(nums.begin() ,nums.end()) ; 

        vector<int>ans(2 , -1) ;

        unordered_map<int ,int>m ;

        for(int val : nums){
            m[val]++ ;
        }

        ans[0] = nums[0] ;

        int y = INT_MAX ;
        for(auto val : m){
            
            if(val.first > ans[0] && m[ans[0]] != val.second){
                y = min(y , val.first) ;
            }
        }
         ans[1] = y ; 
        if(y == INT_MAX){
            ans[0] = -1 ; 
            ans[1] = -1 ; 
            // return ans ;


        }
       
        return ans ;

        
    }
};
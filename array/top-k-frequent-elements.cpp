class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size() ;
        map<int ,int>mp ;

        for(int val : nums){
            mp[val]++ ;
        }

        vector<int>ans(k) ;
        vector<vector<int>>arr(n+1) ;

        for(auto [num , freq] : mp){
            arr[freq].push_back(num) ;
        }

        int j = 0 ; 
        for(int i = n ; i>=0 && j<k; i--){
            for(int val :arr[i]){
                ans[j] = val ;
                j++ ;
                // if(j>=k){
                //     break ;
                // }
            }
        }
        return ans ;


       


        
        


        
        



        return ans ;
        
    }
};
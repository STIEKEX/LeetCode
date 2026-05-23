class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size() ; 

        unordered_map<int ,vector<int>>m ; 

        for(int i = 0 ; i< n; i++){
            m[nums[i]].push_back(i) ; 
        }

        int ans = INT_MAX ;
        for(auto val : m){

            vector<int>arr = val.second ; 

            if(arr.size() >= 3){

                for(int i = 2 ; i< arr.size(); i++){
                    int val =  abs(arr[i-2] - arr[i-1])+ abs(arr[i-1] - arr[i]) + abs(arr[i] - arr[i-2]) ;
                    ans = min(ans , val) ;
                }
            }
        }
        if(ans == INT_MAX) return -1 ;

        return ans ;
        
    }
};
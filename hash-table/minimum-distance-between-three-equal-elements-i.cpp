class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size() ; 

        int ans = INT_MAX ; 

        unordered_map<int ,vector<int>>m ; 

        for(int i = 0 ; i<n ; i++){
            m[nums[i]].push_back(i) ; 
        }


        for(auto val : m){
            if(val.second.size() >=3)

           for(int i = 2; i<val.second.size(); i++){
                ans = min(ans , abs(2*(val.second[i] - val.second[i-2]))) ;
           }
        }
        if(ans == INT_MAX) return -1 ;
        return ans ;


        
    }
};
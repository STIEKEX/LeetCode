class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n = nums.size()  ;
        int ans = INT_MAX ;

        unordered_map<int ,vector<int>> m ; 
        for(int i =0  ; i<n ; i++){
            m[nums[i]].push_back(i) ;
        }

        for(int i  = 0 ; i<n ; i++){
            if(nums[i] == 1){
                if(m.find(2) != m.end()){
                    for(auto val  : m[2]){
                        ans = min(ans , abs(val- i)) ;
                    }
                }
            }
            if(nums[i] == 2){
                if(m.find(1) != m.end()){
                   for(auto val : m[1] ){
                    ans = min(ans , abs(val - i)) ;
                   }
                }
            }
        }
        if(ans == INT_MAX) return -1 ; 
        return ans ;
        
    }
};
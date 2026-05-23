class Solution {
public:
        void getsubsets(vector<int>&nums , vector<vector<int>>&ans ,vector<int>&arr , int i){

            if(i == nums.size()){
                ans.push_back(arr) ;
                return ;
            }
            arr.push_back(nums[i]) ;
            getsubsets(nums , ans ,arr ,i+1) ;
            arr.pop_back() ;

            int idx = i+1 ; 
            while(idx < nums.size() && nums[idx-1] == nums[idx]){
                idx++ ;
            }
            getsubsets(nums , ans  , arr , idx) ;

        }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        vector<vector<int>>ans ; 
        vector<int>arr ;
        getsubsets(nums , ans , arr ,0);
        return ans ;

        
    }
};
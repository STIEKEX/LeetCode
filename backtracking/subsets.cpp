class Solution {
public: 
    void getsubsets(vector<int>&nums , vector<int>&arr , vector<vector<int>>&ans , int i){

        if(i == nums.size()){
            ans.push_back(arr) ;
            return ;
        }
        arr.push_back(nums[i]) ;
        getsubsets(nums,arr,ans , i+1) ;
        arr.pop_back() ;
        getsubsets(nums , arr, ans , i+1) ;

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans ;
        vector<int>arr ;
        int i = 0 ;
        getsubsets(nums , arr , ans , i ) ;
        return ans ;
    }
};
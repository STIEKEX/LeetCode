class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        int N = nums.size() ;
        vector<int>ans; 
        int j = 0 ; 
        while(j != n ){
            j++ ;
        }
        int i = 0 ;
        while( j < N){
            ans.push_back(nums[i]) ;
            ans.push_back(nums[j]) ;
            i++ , j++ ;
        }
        return ans ;

        
        
    }
};
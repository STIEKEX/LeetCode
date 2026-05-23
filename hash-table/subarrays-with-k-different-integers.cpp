class Solution {
public:
        int atmost(vector<int>nums , int k){
            int n = nums.size() ; 
            int i = 0 ; 
            int j = 0 ;

            unordered_map<int ,int>m ; 

            int count = 0 ;
            while(j<n){
                m[nums[j]]++ ;
                if(m[nums[j]] == 1){
                    k-- ;
                }
                while(k < 0){
                    m[nums[i]]-- ;
                    if(m[nums[i]] == 0)k++ ; 
                    i++ ;
                }
                count += j-i+1 ; 
                j++ ;
            }
            return count ;
        }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums , k) - atmost(nums , k-1) ;
        
    }
};
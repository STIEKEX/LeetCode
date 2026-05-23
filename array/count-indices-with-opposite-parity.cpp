class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int>ans ;

        for(int i = 0 ; i<n ; i++){
            int count = 0 ;
            bool even = false , odd = false ; 
            if(nums[i] % 2 == 0){
                even = true ;
            }
            else{
                odd = true ;
            }
            
            for(int j = i+1 ; j<n ; j++){
                if(even){
                    if(nums[j] % 2 == 1){
                        count++;
                    }
                }
                if(odd){
                    if(nums[j] % 2 == 0){
                        count++ ; 
                    }
                }
            }
            ans.push_back(count) ; 
        }
        return ans ;
            
    }
};
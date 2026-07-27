class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size() ; 

        int x = 0 ; 
        int y = 0 ; 
        for(int val : nums){
            if(val >= x){
                y = x ; 
                x = val ; 
            }
            else if(val > y){
                y = val ; 
            }
        }
        return (x-1) * (y-1) ; 
        
    }
};
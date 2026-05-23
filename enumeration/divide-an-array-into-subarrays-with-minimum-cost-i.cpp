class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a = nums[0] ; 

        int b = 100 , c = 100 ; 

        for(int i = 1 ; i<nums.size() ; i++){
             c = min(nums[i], c) ; 
            if(c < b) swap(b ,c) ;
        }
        return a+ b + c ;

        

    }
};
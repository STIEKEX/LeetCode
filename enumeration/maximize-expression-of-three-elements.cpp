class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n = nums.size() ; 
        int first = nums[0] ; 
        int second = INT_MIN ; 
        int smallest = nums[0] ; 

        for(int i = 1 ; i<n ; i++){
            int x = nums[i] ;; 
            if(x > first){
                second = first ; 
                first = x ;
            }else if( x > second && x <= first){
                second = x ; 
            }
            smallest = min(smallest , x) ;
        }

        if(second == INT_MIN){
            second = first ;
        }
        return first + second - smallest ;
        
    }
};
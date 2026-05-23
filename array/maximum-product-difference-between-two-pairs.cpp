class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        int max1 = INT_MIN , max2 = INT_MIN  , min1 = INT_MAX , min2 = INT_MAX ; 


        for(int val : nums){

            if(val > max1){
                max2 = max1 ; 
                max1 = val ;
            }
            else if(val > max2){
                max2 = val ;
            }   


            if(val < min1){
                min2 = min1; 
                min1 = val ;
            }
            else if(val < min2){
                min2 = val ;
            }
        }
        return (max1 * max2) - (min1 * min2) ;
    }
};
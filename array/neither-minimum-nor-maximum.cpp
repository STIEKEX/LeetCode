class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size() ;

        if(n < 3){
            return -1 ;
        }
        
        int first = INT_MIN , second = INT_MIN , thrid = INT_MIN ;

        for(int val : nums){

            if(val > first){
                thrid = second ; 
                second = first ; 
                first = val ;
            }
            else if(val > second){
                thrid = second ; 
                second = val;
            }
            else if(val > thrid){
                thrid = val ;
            }
        }
        return second ;
        
        
    }
};
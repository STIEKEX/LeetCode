class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN , second = LLONG_MIN , third = LLONG_MIN ; 

        for(int val : nums){
            if(val == first || val ==second || val == third){
                continue ;
            }
            
            if(val > first){
                third = second ;
                second = first ; 
                first = val ; 
            }
            else if(val > second){
                third =second ; 
                second = val ;
            }
            else if(val > third){
                third = val ;
            }
        }
        if(third != LLONG_MIN){
            return third ;
        }
        return first ;
        
    }
};
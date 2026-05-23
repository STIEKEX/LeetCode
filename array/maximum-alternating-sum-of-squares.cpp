class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>sq ; 

        for(int val : nums){
            sq.push_back(val*val) ;

        }

        sort(sq.begin() , sq.end(),greater<int>()) ; 

        int half = (nums.size() - 1 ) / 2 ;
        long long  sum = 0 ;

        for(int i = 0 ; i<=half ; i++){
            sum += sq[i] ;

        }
        long long  sub = 0 ;

        for(int i = half+1 ; i<nums.size() ; i++){
            sub += sq[i] ;
        }

        return sum - sub ;


        
    }
};
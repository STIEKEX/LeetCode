class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = INT_MAX ; 
        int mx = INT_MIN ; 

        for(int val : nums){
            mn = min(val , mn) ; 
            
            mx = max(val , mx) ; 
        }
        return __gcd(mn , mx) ; 
        
    }
};
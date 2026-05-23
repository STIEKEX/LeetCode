class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size() ;

        long long ans = 0 ;

        vector<int>prefix(n) ;

        int mx = prefix[0] ; 

        for(int i = 0 ;i<n ; i++){
            mx = max(nums[i] , mx); 
            prefix[i] = __gcd(nums[i] , mx) ;
        }

        sort(prefix.begin() , prefix.end()) ;
        int i = 0 ;
        int j = prefix.size() -1 ;

        while( i< j){
            ans += __gcd(prefix[i] , prefix[j]) ; 
            i++ , j-- ;
        }
        return  ans ;
        
    }
};
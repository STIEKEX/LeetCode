class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        
        int n = nums.size() ; 
        if(n == 1) return 1 ; 

        int i = 0 , j = 0 ;

        vector<int>freq(n+1 , 0)  ;

        int mxfreq = 0;

        int len = 0 ;

        while(j < n){
            freq[nums[j]]++ ; 

            mxfreq = max(mxfreq , freq[nums[j]]) ; 

            len = j-i+1 ; 
            while(len - mxfreq > k){
                freq[nums[i]]-- ; 
                i++ ;
                len-- ;
            }
            j++ ;
        }
        return mxfreq ;



        
    }
};
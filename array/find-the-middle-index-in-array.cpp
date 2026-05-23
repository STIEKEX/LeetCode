class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int n = nums.size() ;
        if(n == 1){
            return 0 ;
        }
        vector<int>prefix(n) ;
        
        prefix[0] = nums[0] ;
        for(int i = 1 ; i<n ;i++){
            prefix[i] = prefix[i-1] + nums[i] ;
        }

        int ans = -1 ;

       vector<int>suffix(n) ;
       suffix[n-1] = nums[n-1] ;
       for(int i = n-2 ; i>=0 ; i--){
        suffix[i] = nums[i] + suffix[i+1] ;
       }

        if(suffix[1] == 0){
            return 0 ;
        }
       for(int i = 1 ; i<n-1 ; i++){
        if(prefix[i-1] == suffix[i+1]){
            ans = i ;
            break ;
        }
       }
       if(ans != -1){
        return ans ;
       }
    
       
       
        if(prefix[n-2] == 0){
            return n-1 ;
        }
       return ans ;
    }
};
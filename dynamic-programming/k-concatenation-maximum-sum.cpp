class Solution {
public:
    static const int mod = 1e9+7 ; 
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        
        int n = arr.size() ; 

        int sum  = 0  ;
        for(int val  : arr){
            sum += val ; 
        }
        

       
        int mx = 0 ;
        int curr = 0 ;  
        for(int val : arr){
            curr += val ; 
            mx = max(mx , curr) ; 
            if(curr < 0){
                curr =0 ; 
            }
        }
        if(k == 1) return mx%mod ; 

        int suffix = 0 ; 
        int mxSuffix = 0 ;
        for(int i = n-1 ; i>= 0 ; i--){
            suffix += arr[i] ; 
            mxSuffix = max(suffix , mxSuffix) ; 
        }

        int prefix = 0 ; 
        int mxPrefix = 0 ; 
        for(int i =0 ; i<n ; i++){
            prefix += arr[i] ; 

            mxPrefix = max(prefix , mxPrefix) ; 
        }
        int ans = 0 ; 
        if(sum > 0){
         ans = mxSuffix + (k-2)*sum + mxPrefix ; 
        }
        else{
            ans  = mxSuffix + mxPrefix ;
        } 
        return ans % mod ; 

    }
};
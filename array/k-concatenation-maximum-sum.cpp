class Solution {
public:
    static const int mod = 1e9+7 ; 
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        
        int n = arr.size() ; 

        long long  sum  = 0  ;
        for(int val  : arr){
            sum += val ; 
        }
        

       
        long long  mx = 0 ;
        long long  curr = 0 ;  
        for(int val : arr){
            curr += val ; 
            mx = max(mx , curr) ; 
            if(curr < 0){
                curr =0 ; 
            }
        }
        if(k == 1) return mx%mod ; 

        long long  suffix = 0 ; 
        long long  mxSuffix = 0 ;
        for(int i = n-1 ; i>= 0 ; i--){
            suffix += arr[i] ; 
            mxSuffix = max(suffix , mxSuffix) ; 
        }

        long long prefix = 0 ; 
        long long  mxPrefix = 0 ; 
        for(int i =0 ; i<n ; i++){
            prefix += arr[i] ; 

            mxPrefix = max(prefix , mxPrefix) ; 
        }
        long long  ans = 0 ; 
        if(sum > 0){
         ans = mxSuffix + (k-2LL)*sum + mxPrefix ; 
        }
        else{
            ans  = max(mx , mxSuffix + mxPrefix) ;
        } 
        return ans % mod ; 

    }
};
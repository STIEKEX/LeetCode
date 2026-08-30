class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size() ; 
       int mn = INT_MAX ; 
       int mx = INT_MIN  ;

       int mnI =  0 ; 
       int mxI = 0 ; 

       for(int i = 0 ; i<nums.size() ; i++){
            if(mn > nums[i]){
                mn = nums[i] ; 
                mnI =  i;
            }
            if(mx < nums[i]){
                mx = nums[i] ; 
                mxI = i ; 
            }
       }

       int ans = INT_MAX  ;

        ans = min(ans , max(mxI , mnI))+1 ; // left
        ans = min(ans , n - (min(mxI , mnI))) ;  // right ; 

        // left , right ; 

        int t1 = mxI + (n-mnI) +1; 
        int t2 = mnI + (n-mxI) +1; 

        ans = min(ans , min(t1 ,t2)) ; 
        return ans ;



        
    }
};
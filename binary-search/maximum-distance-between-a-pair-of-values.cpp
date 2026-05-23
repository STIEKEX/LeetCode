class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size() ;
        int n = nums2.size() ; 

        int mx = INT_MIN  ;

        for(int i = n-1 ; i>=0 ; i--){
            int idx = -1 ; 
            int val = nums2[i] ;

            int st = 0 , end = min(i  ,m-1); 

            while(st <= end){
                int mid = st + (end -st)/2 ; 
                if(nums1[mid] <= val){
                    idx=  mid ; 
                    end = mid-1 ;
                }
                else if(nums1[mid] > val){
                    st = mid+1 ; 
                }
            }
            if(idx != -1){
                mx = max(mx , i - idx ) ; 
            }
           
        }
        if(mx == INT_MIN) return 0 ;
        return mx ; 




        
    }
};
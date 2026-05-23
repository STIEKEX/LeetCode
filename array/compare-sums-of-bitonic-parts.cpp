class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n = nums.size() ; 

        int idx = 0 ;

       for(int i = 0 ; i<n ; i++){
           if(nums[i] > nums[i+1]){
               idx = i ; 
               break ;
           }
       }
        long long  left =0 ;

        for(int i = 0 ; i<= idx ; i++){
            left += nums[i] ;
        }

        long long  right = 0 ;

        for(int i = idx ; i<n ;i++){
            right += nums[i] ;
        }
        if(left == right){
            return -1 ;
        }

        if(left > right) return 0 ; 
        return 1 ;
        

        
        
    }
};
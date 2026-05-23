class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double sum = 0 ;
        double maximum = INT_MIN ;

        int n = nums.size() ;

        int l = 0 ; 
        

        for(int i = 0 ; i<k ;i++){
            sum += nums[i] ;
        }
        
        
        maximum = max(maximum , sum/k) ;
        for(int i = k ; i<n ; i++){
           
            sum += nums[i] - nums[l] ;
           
            maximum = max(maximum , sum/k) ;
            l++ ;
        }
        return maximum ;

       

        
        
    }
};
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        
        int n = nums.size() ; 
        
        
        int ans = 0 ;
        for(int i = 0 ; i<n ; i++){
            int count = 0 ;
            int sum = 0 ; 
            int val = nums[i] ;
            
            for(int i = 1 ; i*i<=val ; i++){
                if(val % i == 0){
                    int d1 = i  ;
                    int d2 = val/i ;
                    count++ ;
                    sum += d1 ;
                     if(d1 != d2){
                    count++ ;
                     sum += d2 ;
                }
                  
                }
               
            }
           if(count == 4){
                ans += sum  ;
            }
            
            

        }
        return ans ;
       
}
         
    
};
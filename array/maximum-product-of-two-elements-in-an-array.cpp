class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int x = 0 ; 
        int y = 0 ; 

        for(int val : nums){
            if(val >= x){
                y = x ; 
                x=  val ; 
            }
            
        }
        return (x-1)*(y-1) ;  
        
    }
};
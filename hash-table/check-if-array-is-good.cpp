class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size() ; 
        vector<bool>seen(n) ; 
        int count = 0 ;
       for(int val : nums) {
        if(val > n) return false ; 
        if(count > 2) return false ;

        if(val == n-1 ) count++ ; 
        if(seen[val]) return false ;
        if(val != n-1){
            seen[val] = true ;
        }
       


       }
      if(count != 2) return false ; 
       return true ;
       
        
    }
};
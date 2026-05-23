class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
      int frq[101] = {} ;
      
      for(int val : nums){
        frq[val]++ ;
      }
    
    int ans = 0 ;
      for(int i = 1 ; i<=100 ; i++){
        if(frq[i] == 2){
            ans ^= i ;
        }
      }
      return ans; 
        
    }
};
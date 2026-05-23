class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans ;
        if(n <=1 ){
            ans.push_back(0) ; 
            return ans; 
        }
        
        int neg = -1 ; 
        int pos = 1 ; 
        for(int i=0 ; i<n ; i++) {
          if(n%2==0){
              if(i < n/2){
                ans.push_back(pos) ;
                pos++ ;
            }else{
               ans.push_back(neg) ;
                neg-- ;
            }

          }
          else{
            n = n-1 ;
            ans.push_back(0) ;
              
              if(i < n/2){
                ans.push_back(pos) ;
                pos++ ;
            }else{
              ans.push_back(neg) ;
                neg-- ;
            }
          }
        }
        return ans ;

      
        
    }
};
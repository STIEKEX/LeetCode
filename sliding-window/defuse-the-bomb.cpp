class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n = code.size() ; 
        vector<int>ans(n , 0) ;
        if(k == 0) return ans ;
        
        int st = 0 , end = 0 , sum = 0 ;
        if(k > 0){
            st = 1 ; 
            end = k ;
            
        }
        else{
            st = n+ k ;
            end = n-1; 
        }
        for(int i = st ; i<=end ; i++){
            sum += code[i] ;
        }

        for(int i = 0 ; i<n ; i++){
            ans[i] = sum ; 
            sum -= code[st%n] ; 
            st++ ; 
            end++ ;
            sum += code[end%n] ; 
            
        }
        return ans ;
        
    }
};
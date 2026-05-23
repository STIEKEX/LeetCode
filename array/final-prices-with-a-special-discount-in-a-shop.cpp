class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size() ; 

        vector<int>ans(n) ; 


        stack<int>s ; 


        for(int i = n-1 ; i>=0 ; i--){
            int val = prices[i] ;
            while(!s.empty() && s.top() >val ){
                s.pop() ; 
            }
            if(s.empty()){
                ans[i] = val ;
            }else{
                ans[i] = val - s.top() ; ; 
            }
            s.push(val) ;
        }
        return ans ;
        
    }
};
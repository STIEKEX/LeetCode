class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

        long long ans = 0 ; 


        priority_queue<int>p(gifts.begin() , gifts.end()) ; 

        while(k--){
            int x = p.top() ; 
            p.pop() ; 
            
            p.push(sqrt(x)) ;

        }
        while(!p.empty()){
            ans += p.top() ; 
            p.pop() ;
        }
        return ans ;
        
    }
};
class Solution {
public:
    bool isPossible(vector<int>& target) {
            
            int n = target.size() ; 

            priority_queue<int>q ; 
            long long sum = 0 ;
            for(int val : target){
                q.push(val) ; 
                sum += val ;
            }

            while(q.top() != 1){
                int val = q.top() ; 
                q.pop() ;
                 

                sum -= val ; 
                if(sum == 1) return true ; 
                if(sum == 0 || sum >= val) return false ;
                
                long long  rem = val % sum  ;
                if(rem == 0) return false ;
                
                sum += rem ;
                 q.push(rem) ; 
            }
            return true ; 

        
    }
};
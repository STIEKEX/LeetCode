class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s ; 

        for(int val : a){
            if(val > 0){
                s.push(val) ;
            }
            else{

                while(!s.empty() && s.top() > 0 && s.top() < abs(val)){
                    s.pop() ;
                }
                if(!s.empty() && s.top() == abs(val)){
                    s.pop() ;
                }
                else if(s.empty() || s.top() < 0){
                    s.push(val) ;
                }
            }
        }

        

           
            

            
        
        vector<int>ans ; 

        while(!s.empty()){
            ans.push_back(s.top()) ;
            s.pop() ;
        }
        reverse(ans.begin() , ans.end()) ;
        return ans ;
        
    }
};
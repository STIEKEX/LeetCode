class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0 , j = 0 ; 


        stack<int>s ; 
        
        while(i<pushed.size()){
            if(!s.empty() && popped[j] == s.top() ){
                s.pop() ; 
                j++ ;
            }
           
            else {
                s.push(pushed[i]) ;
                i++ ;
            }
            

        }

        while(!s.empty()){
            if(popped[j] != s.top()){
                return false ;
            }
            s.pop() ; 
            j++ ;

            
        }
        if(j != popped.size())  return false ;
        return true ;

    }
};
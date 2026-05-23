class Solution {
public:
    int minOperations(vector<string>& logs) {

        int n = logs.size() ; 
        stack<string>s ; 

        int i = 0 ; 
        while(i<n){
            if(logs[i] == "../"){
                if(!s.empty()){
                    s.pop() ;
                }
            }
            else if(logs[i] == "./"){
                i++ ;
                    continue ;
            }
            else{
                s.push(logs[i]) ;
            }
            i++ ;
        }
        return s.size()  ; 

       

        
    }
};
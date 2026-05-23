class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n = ops.size() ;

        stack<int> stk ; 

        int i = 0 ; 
        while(i<n){
            if(ops[i] == "+"){
                int num1 = stk.top() ;
                stk.pop() ;
                int num2 = stk.top() ;
                int sum = num1 + num2 ; 
                stk.push(num1) ;
                stk.push(sum ) ;
            }
            else if (ops[i] == "D"){
                int val =  2 * stk.top() ;
                stk.push(val) ;
            }
            else if(ops[i] == "C"){
                stk.pop() ;
            }
            else{
                int val = stoi(ops[i]) ;
                stk.push(val) ;
            }
            i++ ;
        }


        int sum = 0;
        while(!stk.empty()){
             sum = sum + stk.top() ;
            stk.pop() ;
        }
        return sum ;
        
    }
};
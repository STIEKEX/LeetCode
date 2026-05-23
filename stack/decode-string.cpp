class Solution {
public:
    string decodeString(string s) {

        stack<int>num ; 

        stack<string>str ; 
        int digit = 0 ;
        for(char ch : s){

            if(isdigit(ch)){
                 digit = digit * 10 + (ch - '0') ;
            }

            else if(ch == '['){
                str.push("[") ;
                num.push(digit) ;
                digit = 0 ;
                
            }

            else if(ch == ']'){
                string curr = "" ;
                
                while(!str.empty() && str.top() != "[" ){
                    curr  = str.top() + curr ;
                    str.pop() ;
                }
                

                str.pop() ;
                int size = num.top() ; 

                num.pop() ;
                string temp = "" ;

                for(int i = 0 ; i<size ; i++){
                    temp += curr ;
                }
                
                str.push(temp) ;
            }

            else{
                string news = "" ;
                news += ch ;
                str.push(news) ;
            }

            
        }

        string ans = ""  ;

        while(!str.empty()){
            ans  = str.top() + ans ;
            str.pop() ;
        }
        return ans ;
        
    }
};
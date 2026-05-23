class Solution {
public:
    string addStrings(string num1, string num2) {

        int m = num1.size() ; 
        int n = num2.size() ; 

        int i = m-1 , j = n-1 ;


        int carry = 0 ; 
        string digit = "" ;
        
        while( i>= 0 && j>=0){

            int a = num1[i] - '0' ; 
            int b = num2[j] - '0' ;

            int sum = a + b   ;
            if(carry > 0){
                sum += carry ; 
                carry = 0 ;
            }

            if(sum > 9){
                int rem =  sum % 10 ;
                digit =  to_string(rem) + digit ;
                carry = sum / 10 ;
            }
            else{
                digit =  to_string(sum)  + digit ;
            }
            i-- , j-- ;
        }

        while( i>= 0){

            
            int sum = num1[i] - '0' + carry ;
            carry = 0 ;

            if(sum > 9){
                    int rem = sum % 10 ; 
                    digit = to_string(rem) + digit ;
                    carry = sum / 10 ;
            }


            
            else{
                digit = to_string(sum) + digit ;
            }
            i-- ;
        }


        while(j >= 0){
           
                int sum = num2[j] - '0' + carry ;
                carry = 0 ;

                if(sum > 9){
                    int rem = sum % 10 ; 
                    digit = to_string(rem) + digit ;
                    carry = sum / 10 ;
                }

            
            else{
                digit = to_string(sum ) + digit ;
            }
            j-- ;


            
        }

        if(carry > 0){
            digit = to_string(carry) + digit ;
        }
        return digit ;
        
    }
};
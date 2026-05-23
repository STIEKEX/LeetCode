class Solution {
public: 
       
    string addBinary(string a, string b) {
        
        int carry = 0  ;

       
        string ans = "" ;
        int m = a.size()  ;
        int n = b.size() ; 

        int i = m-1 , j = n-1 ;

        while(i >= 0 || j>=0){

            if(i >= 0 && j>=0){
                if(a[i] == '1' && b[j] == '1'){
                    if(carry == 1){
                        ans = '1' +ans ;
                    
                    }
                    else{
                        ans = '0' + ans ; 
                        carry = 1 ;

                    }
                    // ans = '0' + ans ;
                    // carry = 1 ;
                    
                }
                else if(a[i] == '0' && b[j] == '1' || a[i] == '1' && b[j] == '0'){
                    if(carry == 1){
                        ans = '0' + ans  ;
                       
                    }
                    else{
                        ans = '1' + ans ;
                    }
                }
                else{
                    if(carry == 1){
                        ans = '1' + ans ;
                        carry = 0 ;
                    }
                    else{
                        ans = '0'  + ans ;
                    }
                }
            }else {
                if(i < 0 && b[j] == '1'){
                    if(carry == 1){
                        ans = '0'  + ans ;
                       
                    }
                    else{
                        ans = '1' + ans ;
                    }
                    
                }
                else if(i<0 && b[j] == '0'){
                    if(carry == 1){
                        ans = '1'  + ans;
                        carry = 0 ; 
                    }
                    else{
                        ans = '0' + ans ;
                    }
                }
                else if(j<0 && a[i] == '1'){
                    if(carry == 1){
                        ans = '0'  + ans;
                    }
                    else{
                        ans = '1' + ans ;
                    }
                }
                else if(j < 0 &&  a[i] == '0'){
                    if(carry == 1){
                        ans = '1' + ans ;
                        carry = 0 ; 
                    }
                    else{
                        ans = '0'  + ans;
                    }
                }
            }
            i-- , j-- ;
        }

        if(carry == 1){
            ans = '1' + ans ;
        }
        return ans ; 


        

    }
};
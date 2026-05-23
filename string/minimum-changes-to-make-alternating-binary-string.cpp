class Solution {
public:
    int minOperations(string s) {

        int n = s.size() ; 

        bool check = false ;
        if(s[0] == '1'){
            check = true ;
        }

        int count1 = 0 ;
        int count2 = 0 ;
        int op = 2 ;
        while(op != 0){
        for(int i = 0 ; i<n ; i++){


            if(check){

                if(i % 2 != 0){
                    if(s[i] != '0'){
                        count1++ ;
                    }
                    

                }
                else{
                    if(s[i] != '1'){
                        count1++ ;
                    }
                }


            }
            else{

                if(i % 2 == 0){
                    if(s[i] != '0'){
                        count2++ ;
                    }
                    
                }
                else{
                        if(s[i] != '1'){
                            count2++ ;
                        }
                    }

            }
        }
        op-- ; 
        if(check){
            check = false ;
        }
        else{
             check = true ;
        }
       
        }
        return min(count1 , count2) ;
        
    }
};
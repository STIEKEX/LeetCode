class Solution {
public:
    string largestGoodInteger(string num) {

        int n = num.size() ; 

        int i = 0 ; 
        int maximum = INT_MIN ;
        string val  = "" ;

        while(i < n-2){
             
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                val = string(3 , num[i]) ;
                int nums = stoi(val) ;
                // maximum = stoi(maximum) ;
                maximum = max(nums , maximum) ;
                // val ="" ;

            }
            i++ ;
        // else{
        //     i++ ;
        // }

             
        }
        if(maximum == 0){
            return "000" ;
        }
        if(maximum == INT_MIN){
            return "" ;
        }
        return to_string(maximum);

            
       
        
    }
};
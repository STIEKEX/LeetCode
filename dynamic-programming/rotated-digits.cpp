class Solution {
public:
    int rotatedDigits(int n) {

        int count = 0 ; 

        for(int i = 1 ; i<=n ; i++){
            int num = i ;
            bool isvalid = true  ; 
            bool hasChanges = false;

            while(num > 0){
            int rem = num % 10  ; 

            if(rem == 3 || rem == 4 || rem == 7){
                isvalid = false ; 
                break ;
            }

            if(rem == 2 || rem ==  5 || rem == 6 || rem == 9){
                hasChanges = true ;
            }

            num = num/10 ; 
        }
            if(isvalid && hasChanges){
            count++ ; 
        }

        }
        return count ; 
        

        
    }
};
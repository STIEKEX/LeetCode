class Solution {
public:
    int totalMoney(int n) {
        int i = 1 , days = 7 ; 
        int Totalamount = 0 ;
        int temp = i ;

        while(n != 0){

            if(days == 0){
                days = 7 ; 
                temp++ ;
                i= temp ;
            }
            Totalamount += i ;
            n-- ;
            days-- ;
            i++ ;

        }
        return Totalamount ;
    }
};
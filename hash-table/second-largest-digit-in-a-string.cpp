class Solution {
public:
    int secondHighest(string s) {
        unordered_set<int > res;
        int large =-1;
        int seclar =  -1  ;

       int n =  s.length() ;

       for(int i=0 ; i<n ; i++){
        if(s[i]>='0' &&  s[i]<='9'  ){
            int no = s[i]  - '0' ;
            // res.insert(no) ;
            if(no > large){

              seclar = large ;
              large = no ;
            }
            if(no<large && no>seclar){
                seclar = no;
            }
            
        }
       }
    //    int size = res.size() ;
    //    if(size <=1){
    //     return  -1 ;
    //    }
       return  seclar ;
       
       
    }
};
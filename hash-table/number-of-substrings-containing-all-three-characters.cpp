class Solution {
public:
    int numberOfSubstrings(string s) {


       vector<int>seen(3, 0);

       int i = 0 ; 
       int j = 0 ; 

       int count = 0 ;

       int n =s.size() ; 

       while(j<n){

        seen[s[j] - 'a']++ ;

        while(seen[0] > 0 && seen[1] > 0 && seen[2] > 0){
            count += n-j ; 
             
            seen[s[i] - 'a']-- ;
            i++ ;
        }
        j++ ;
       }
       return count ;
       

        
    }
};
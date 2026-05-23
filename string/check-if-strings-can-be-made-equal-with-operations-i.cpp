class Solution {
public:
    bool canBeEqual(string s1, string s2) {
       int n = s1.size() ; 

       string a = "" ; 
       string b = "" ;
       string c = "" ; 
       string d = "" ;

       for(int i = 0 ; i<n ; i++){
        
            if(i % 2 == 0){
                a += s1[i] ;
                c += s2[i] ; 
            }
            else{
                b += s1[i] ;
                d += s2[i] ; 
            }
       }
       sort(a.begin() , a.end()) ; 
       sort(b.begin() , b.end()) ; 
       sort(c.begin() , c.end()) ; 
       sort(d.begin() , d.end()) ; 

       
       return a == c && b == d ;  


        
    }
};
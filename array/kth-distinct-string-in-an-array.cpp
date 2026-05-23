class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        map<string ,int>m ; 

        for(string ch : arr){
            m[ch]++ ;
        }

        for(string ch : arr){
            
            if(m[ch] == 1){
                k-- ;
                if(k == 0) return ch ;
            }
        }
        return "" ;

       

        
        
        return "" ;


    }
};
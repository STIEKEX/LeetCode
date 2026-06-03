class Solution {
public:
    int numSplits(string s) {

        vector<int>left(26 , 0) ; 
        vector<int>right(26 , 0) ; 
        int l = 0 , r = 0 ; 

        for(char ch :s){
            if(right[ch -'a'] == 0){
                r++ ; 
            }
            right[ch -'a']++ ;
        }

        int ans= 0 ; 
        for(char val : s){

            int ch = val - 'a' ; 

            if(left[ch] == 0){
                l++ ; 
            }
            left[ch]++ ; 

            right[ch]-- ; 
            if(right[ch] == 0){
                r-- ; 
            }

            if(l == r){
                ans++ ; 
            }
        }
        
        return ans ;
    }
};
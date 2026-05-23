class Solution {
public:
    bool hasSameDigits(string s) {
        
        vector<int>arr ;

        for(char val : s){
            int digit = val - '0' ;
            arr.push_back(digit) ;
        }
        
        while(arr.size() != 2){
            for(int i = 0 ; i<arr.size()-1; i++){
                arr[i] = (arr[i] + arr[i+1]) % 10 ;
            }
            arr.pop_back() ;
        }

        if(arr[0] == arr[1]) return true ;

        return false ;
        
        
        
    }
};
class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char  ,int>m ; 

        for(int val : s){
            m[val]++ ;
        }

       int odd = INT_MIN ; 
       int even = INT_MAX ; 

       for(auto val : m){
        if(val.second % 2 == 0){
            even = min(even , val.second) ;
        }
        else{
            odd = max(odd , val.second) ;
        }

       }
       return odd - even ;
        
    }
};
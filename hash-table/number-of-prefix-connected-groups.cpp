class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {

        int count = 0 ;
        unordered_map<string , int>m ;

        for(string val : words){
            if(val.size() < k)continue ;
           string str = val.substr(0 , k) ;
            m[str]++ ;
        }

        for(auto val : m){
            if(val.second > 1){
               count++ ;
            }
        }
        return count ;
        
    }
};
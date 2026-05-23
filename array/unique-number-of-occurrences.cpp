class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size() ;
        unordered_map<int ,int>m ;
       
        for(int val : arr){
            m[val]++ ;
        }

         vector<bool>seen(1000, false) ;
       
        for(auto val : m){
            if(seen[val.second]){
                return false ;
            }
            seen[val.second] = true ;
        }
        return true ;



        
        
    }
};
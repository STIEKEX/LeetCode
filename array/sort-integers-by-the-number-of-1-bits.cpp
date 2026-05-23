class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
       unordered_map <int , vector<int>>m ; 

        int bit = 0 ;
       for(int i = 0 ; i <arr.size() ; i++){

        int n = __builtin_popcount(arr[i]); 
        m[n].push_back(arr[i]) ;
        bit = max(bit ,n) ;
       }

        vector<int>ans ;
       for(int i = 0 ; i<=bit ; i++){

        if(m.find(i) != m.end()){
            sort(m[i].begin() , m[i].end()) ;
            
            for(int val : m[i]){
                ans.push_back(val) ;
            }

        }
        // bit++ ;
       }
       return ans ;


        
    }
};
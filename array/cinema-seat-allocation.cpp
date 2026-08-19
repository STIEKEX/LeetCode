class Solution {
public:
    struct pair_hash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ hash<int>()(p.second);
    }
};
    int maxNumberOfFamilies(int n, vector<vector<int>>& r) {
        
        unordered_set<pair<int ,int> , pair_hash>m ; 

        for(auto val : r){
            m.insert({val[0] , val[1]}) ; 
        }
        vector<vector<int>>arr = {{2 , 3 , 4 , 5} , {4 , 5 ,6 ,7} , {6 , 7 ,8 ,9}} ; 
       
        int cnt = 0 ; 
        
        int k = 1 ;
        while(k <= n){
             vector<vector<bool>>seen(n+1 , vector<bool>(10 , false)) ; 
            for(int i = 0 ; i<3 ; i++){
                bool is = false ;
                for(int j = 0 ; j<4  ; j++){
                    int val = arr[i][j] ; 

                    auto x = make_pair(k , val); 
                    if(m.find(x)!= m.end() || seen[k][val]){
                        is = true ;
                        break ; 
                    }
                    seen[k][val] = true ;
                }
                if(!is){
                    cnt++ ; 
                }
            }
            k++ ; 
        }
        return cnt ; 
    }
};
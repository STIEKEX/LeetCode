class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size() ;
        unordered_set<int> s ; 
        vector<int>ans ;
        int orgSum = 0 ;
        int val = 0 ;
        int a = 0 ;

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                orgSum += grid[i][j] ;
                val = grid[i][j] ; 
                if(s.find(val) != s.end()){
                    a = val ;
                    ans.push_back(val) ; 
                }
                s.insert(val)  ;

            }
        }

        int expSum = (n*n) * ((n*n)+1)/2 ;
        int b = expSum - orgSum +a; 
        ans.push_back(b) ; 
        return ans ; 
        
    }
};
class Solution {
public:
        void getCombination(int n , int k , int i , vector<int>&val , vector<vector<int>>&ans){
            
            if(k == 0){
                ans.push_back(val) ;
                return ;
            }
            
            if(i > n){
                return ;
            }
            val.push_back(i) ;
            getCombination(n , k-1 , i+1,val ,ans) ;
            val.pop_back() ;
            getCombination(n , k , i+1 , val ,ans ) ;
        }
    vector<vector<int>> combine(int n, int k) {
        vector<int>val ;
        int i = 1 ;
        vector<vector<int>>ans ;
        getCombination(n , k , i , val , ans );
        return ans ;
        
    }
};
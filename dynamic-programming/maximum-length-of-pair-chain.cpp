class Solution {
public:
    static bool cmp(const vector<int>&a , const vector<int>&b){
        return a[1] < b[1] ; 
    }
    int findLongestChain(vector<vector<int>>& pairs) {

        sort(pairs.begin()  , pairs.end() , cmp) ; 

        int cnt = 1 ; 
        int temp = pairs[0][1] ; 

        for(auto val : pairs){

            int u = val[0] ; 
            int v = val[1] ; 
            if(u > temp){
                cnt++ ;  
                temp = v ; 
            }
        }
        return cnt ; 
        
    }
};
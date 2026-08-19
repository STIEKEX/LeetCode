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
        
       
        int cnt = 0 ; 
        
        int k = 1 ;
        while(k <= n){
            
            vector<int>l = {2 , 3 ,4 , 5} ; 
            vector<int>M = {4 ,5 ,6 ,7} ; 
            vector<int>r = {6 , 7 ,8,9} ; 

            bool left = true , right = true , middle = true ; 

            for(int val : l){
                auto x = make_pair(k ,val) ; 
                if(m.find(x) != m.end()){
                    left = false ;
                    break ; 
                    
                }
            }

             for(int val : M){
                auto x = make_pair(k ,val) ; 
                if(m.find(x) != m.end()){
                    middle = false ;
                    break ; 
                    
                }
            }

             for(int val : r){
                auto x = make_pair(k ,val) ; 
                if(m.find(x) != m.end()){
                    right = false ;
                    break ; 
                    
                }
            }
            if(left && right){
                cnt += 2 ; 
            }
            else if(left || middle || right){
                cnt += 1 ; 
            }
            k++ ; 
        }
        return cnt ; 
    }
};
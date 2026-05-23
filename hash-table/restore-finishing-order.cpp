class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int , int > m ;
        for(int val : friends){
            m[val]++ ;
        }

        vector<int> ans ; 
        for(int i = 0 ; i<order.size() ; i++){
            
            if(m.find(order[i]) != m.end()){
                ans.push_back(order[i]) ;
            }

            
        }
        return ans ;
        
    }
};
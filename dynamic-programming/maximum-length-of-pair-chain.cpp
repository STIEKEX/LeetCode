class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin() , pairs.end()) ; 
        
        vector<int>temp  ;
        temp.push_back(pairs[0][1]) ; 

        for(int i =1 ; i<pairs.size() ; i++){
            int u = pairs[i][0] ;  
            int v = pairs[i][1]; 

            if(temp.back() != u && temp.back() != v){
                temp.push_back(pairs[i][1]) ; 
            }
        }
        return temp.size() ; 
       
    }
};
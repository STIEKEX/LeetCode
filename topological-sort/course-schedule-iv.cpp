class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& pre, vector<vector<int>>& queries) {

      vector<bool>ans ;

        set<pair<int ,int>>s ; 

        for(auto val : pre){
            int u = val[0] ;
            int v = val[1] ; 
            s.insert({u ,v}) ; 
        }

        for(auto val: queries){
            int u = val[0] ; 
            int v = val[1]; 
            if(s.find({u ,v}) != s.end()){
                ans.push_back(true) ; 
            }
            else{
                ans.push_back(false) ;
            }
        }
        return ans ;
        
    }
};
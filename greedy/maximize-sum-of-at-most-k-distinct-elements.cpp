class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {

        unordered_set<int> s; 

        for(int val : nums){
            s.insert(val) ;
        }

        vector<int>newnums ; 

        for(int val : s) {
            newnums.push_back(val) ;
        }

        sort(newnums.begin() , newnums.end() , greater<int>()) ;

        vector<int>ans ; 
        for(int i=0 ; i<min(k, (int)newnums.size()); i++){
            ans.push_back(newnums[i]) ;
            
        }

        return ans; 
    }
};
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int>m1(nums1.begin() , nums1.end()) ;

        unordered_set<int>m2(nums2.begin() ,nums2.end()) ;

        
        vector<vector<int>>ans(2); 
        for(int val : m1){
            
            if(m2.find(val) == m2.end()){
                ans[0].push_back(val) ;
            }
        }


         for(int val : m2){
            
            if(m1.find(val) == m1.end()){
                ans[1].push_back(val) ;
            }
        }
        return ans  ;
        

        
    }
};
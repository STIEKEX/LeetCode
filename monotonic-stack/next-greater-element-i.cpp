class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int ,int>m ; 

        int n = nums2.size() ; 

        for(int i = 0 ; i<n-1 ; i++){
            m[nums2[i]] = nums2[i+1] ; 
        }
        m[nums2[n-1]] = -1 ;

        vector<int>ans ; 

        for(int val : nums1){
            if(m.find(val) != m.end()){
                int x = m[val] ; 
                if(x > val){
                    ans.push_back(x) ; 
                }
                else{
                    ans.push_back(-1)  ;
                }
            }
        }
        return ans ;
        

       




        
    }
};
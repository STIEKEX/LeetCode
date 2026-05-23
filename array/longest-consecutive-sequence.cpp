class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>m(nums.begin() , nums.end()) ;

        int ans = 0 ; 

        for(int val : m){

            if(m.find(val -1) == m.end()){
                int curr = val ; 
                int count = 1 ; 

                while(m.find(curr + 1) != m.end()){
                    curr++ ;
                    count++ ;
                }
                ans = max(ans , count) ;

            }
        }
        return ans ;
        
        
    }
};
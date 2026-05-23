class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size() ;
        unordered_map<int,int> m ;
        for(int num : nums){
            m[num]++ ;
        }

        int ans = 0 ; 
        for(auto value : m){
            int f = value.second ;

            ans+= f*(f-1)/2 ; 
        }
        return ans;




        
    }
};
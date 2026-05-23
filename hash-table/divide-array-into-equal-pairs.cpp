class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int ,int>m ;

        for(int val : nums){
            m[val]++ ;
        }

        for(auto val : m){
            if(val.second % 2 != 0){
                return false; 
            }
        }
        return true ;
    }
};
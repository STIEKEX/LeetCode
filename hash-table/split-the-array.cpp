class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {

        unordered_map<int ,int>m ; 

        for(int val : nums){
            m[val]++ ;
        }

        for(auto val : m){
            if(val.second > 2){
                return false; 
            }
        }
        return true ;
        
    }
};
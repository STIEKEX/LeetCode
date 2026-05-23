class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n = nums.size() ; 
        unordered_map<int ,int > m ;

        for(int val : nums){
            m[val]++ ;
        }
        int sum = 0 ;
        for(auto val :m){
            if(val.second % k == 0){
                sum += val.first * val.second ;
            }
        }
        return sum ;
        
    }
};
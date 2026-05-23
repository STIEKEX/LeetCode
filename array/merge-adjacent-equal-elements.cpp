class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {

        vector<long long>ans ; 
        
        for(int i = 0 ; i <nums.size(); i++){

            if(ans.empty()){
                ans.push_back(nums[i]) ; 
                continue ; 
            }
            else{
                ans.push_back(nums[i])  ;
            }

            while(ans.size() > 1){
                auto v1 = ans.back() ; 
                ans.pop_back() ; 
                auto v2 = ans.back() ; 
                ans.pop_back() ; 

                if(v1 == v2) {
                    ans.push_back(v1 + v2) ; 
                }
                else{
                    ans.push_back(v2) ; 
                    ans.push_back(v1) ; 
                    break ;
                }
            }
        }
        return ans ;
        
    }
};
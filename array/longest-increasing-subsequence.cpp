class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ; 

        vector<int>temp ; 


        for(int val : nums){

            auto it = lower_bound(temp.begin() , temp.end() , val) ; 

            if(it == temp.end()){
                temp.push_back(val)  ;
            }
            else{
                *it = val ; 
            }
        }
        return temp.size() ; 
        
    }
};
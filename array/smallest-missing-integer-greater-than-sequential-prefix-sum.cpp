class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size() ; 

        unordered_map<int ,int>m ; 


        for(int val : nums){
            m[val]++ ; 
        }
        

        int sum = nums[0] ; 
        for(int i =1 ; i<n ; i++){
            if(nums[i-1] == nums[i] -1){
                sum += nums[i] ; 
            }
            else{break;}
        }
        while(true){
            if(m.find(sum) != m.end()){
                sum++ ; 
            }
            else{break ;}
        }
        return sum ; 
    }
};
class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k)
    
    {

        int n = nums.size() ; 
        vector<int>arr; 


        for(int val : nums){

            if(val >= 0){
                arr.push_back(val) ; 
            }
        }

        if(arr.size() > 0){

            k = k%arr.size() ; 

            reverse(arr.begin() , arr.begin() + k);

            reverse(arr.begin() + k , arr.end()) ; 

            reverse(arr.begin() , arr.end()) ; 
        }
        int j = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] >=0){
                nums[i] = arr[j++] ;
            }
        }
        return nums ; 
        
        
        
    }
};
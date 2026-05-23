class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size() ; 
        int smallest =  INT_MAX ; 
        int largest = INT_MIN ; 
        for(int i = 0 ; i<n ; i++){
            if(nums[i] < smallest) {
                smallest = nums[i] ;
            }
            if(nums[i] > largest){
                largest  = nums[i] ; 

            }
            
        }
        sort(nums.begin() , nums.end()) ;

        vector<int>ans;  

        int j = 0 ; 
        for(int i =smallest ; i<= largest ; i++){
            if(i!= nums[j]){
                ans.push_back(i) ; 
            }else{
                j++ ;
            }
        }

        return ans; 
        
    }
};
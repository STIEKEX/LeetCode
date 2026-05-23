class Solution {
public:
    vector<int>temp ; 
    vector<vector<int>>arr ; 
    void  solve(int n , vector<int>&nums){

        if(n < 0) {
            arr.push_back(temp) ; 
            return ;
        }
        temp.push_back(nums[n]) ; 

        solve(n-1 , nums) ;

        temp.pop_back() ; 
        solve(n-1 , nums) ; 
    }
    int beautifulSubsets(vector<int>& nums, int k) {

        int n = nums.size() ; 

        solve(n-1 , nums) ;

        int count = 0 ; 
        for(int i = 0 ; i<arr.size() ; i++){
            if(arr[i].empty()) continue ; 

            bool is = false ;

            for(int x = 0 ; x<arr[i].size() ; x++){

                for(int y = x+1 ; y < arr[i].size() ; y++){

                    if(abs(arr[i][x] - arr[i][y]) == k){
                        is = true ; 
                        break ;
                    }
                }
                if(is)break ;
               
            }
             if(!is)count++ ; 
        }
        return count ; 
        
    }
};
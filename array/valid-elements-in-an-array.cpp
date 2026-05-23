class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size()  ;
        vector<int>ans  ;

        // ans.push_back(nums[0]) ;

        vector<int>p(n , -1) ; 
        p[0] = nums[0] ;
        int mx = nums[0] ;
        for(int i =1 ; i<n ; i++){
            if(nums[i] > mx){
                mx = nums[i] ;
                p[i] = nums[i] ;
            }
        }

        vector<int>s(n , -1) ; 

        s[n-1] = nums[n-1] ; 

        int large = nums[n-1] ; 
        for(int i = n-2 ; i>= 0 ; i--){
            if(nums[i] > large){
                large = nums[i] ; 
                s[i] = nums[i] ; 
            }
        }

        int i = 0 ; 
        while(i < n){
            if(p[i] == nums[i] || s[i] == nums[i]){
                ans.push_back(nums[i]) ; 
            }
            i++ ;
        }
        return ans ;

        

        
        
    }
};
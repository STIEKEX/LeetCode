class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int>arr ; 
        for(int x : nums){

            if(arr.empty() || x > arr.back()){
                arr.push_back(x) ; 
            }

            else{
                int low = 0 ; 
                int high = arr.size() -1 ; 
                int ans = arr.size() ;

                while(low <= high){
                    int mid = low + (high-low)/2 ; 

                    if(arr[mid] >= x){
                        ans = mid ; 
                        high = mid -1 ; 
                    }
                    else{
                        low = mid+1 ; 
                    }
                }
                 arr[ans] = x ;
            }
           
        }
        return arr.size() ; 
        
    }
};
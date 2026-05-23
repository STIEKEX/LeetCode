class Solution {
public:

        bool sorted(vector<int>n ){
            int j = n[0] ;
            j++ ;
            for(int i = 1; i<n.size() ; i++){
                if(n[i] <= n[i-1] || n[i] != j){
                    return false ;
                }
                j++ ;
            }
            return true ;
        }
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans ; 

        int n = nums.size() ; 

        int i = 0 ;
        int j = k-1 ; 

        while(j <n){
            vector<int>arr(nums.begin() + i ,nums.begin()+j+1) ;
            if(sorted(arr)){
                ans.push_back(nums[j]) ;
            }
            else{
                ans.push_back(-1) ;
            }
            i++ ; 
            j++ ;
            arr.clear() ;

        }
        return ans ;
        
    }
};
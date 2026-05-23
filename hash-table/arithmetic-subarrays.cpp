class Solution {
public:
    bool checkans(vector<int>arr){
        int n = arr.size() ;
        sort(arr.begin() , arr.end()) ;
        int diff = arr[1] - arr[0] ;
        for(int i = 2 ; i<n ; i++){
            if(arr[i] - arr[i-1] != diff){
                return false ;
            }
        }
        return true ;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans ; 

        int m = l.size() ;
        vector<int>num ;

        for(int i = 0 ; i<m ; i++){
           vector<int > num(begin(nums) + l[i] , begin(nums)+r[i]+1) ;
           ans.push_back(checkans(num)) ;

           
        }
        return ans ;
    }
};
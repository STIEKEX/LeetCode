class Solution {
public:
    vector<int>a ; 
    vector<vector<int>>b ; 

    void solve(int n , vector<int>&arr  , int target){
        if(n < 0) return  ; 

        if(target == 0){
            b.push_back(a) ; 
            return ; 
        }

        if(target >= arr[n]){
            a.push_back(arr[n]) ; 
            solve(n , arr , target - arr[n]) ; 
            a.pop_back() ; 
        }
        solve(n-1 , arr , target) ;
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        int n = arr.size()  ;

        solve(n-1 , arr ,  target)  ;
        return b ; 


    }
};
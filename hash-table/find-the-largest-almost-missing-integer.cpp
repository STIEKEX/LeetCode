class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size() ; 
        unordered_map<int ,int>m  ;

        int mx = INT_MIN ; 
        for(int val : nums){
            m[val]++ ; 
            mx = max(mx , val) ; 
        }
        if(n == k)return mx ; 
        int x = nums[0] ; 

        int y = nums[n-1] ;

        int f1 = m[x] ; 
        int f2 = m[y] ; 


        if(f1 == 1 && f2 ==1){
            return max(x , y) ; 
        }
        else if(f1 == 1 && f2 > 1){
            return x ; 
        }
        else if(f1 > 1 && f2 == 1){
            return y ; 
        }
        
        return -1 ; 
    }
};
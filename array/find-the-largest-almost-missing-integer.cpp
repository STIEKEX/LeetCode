class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size() ; 
        unordered_map<int ,int>m  ;

        int mx = -1; 
        int largest = INT_MIN ; 
        for(int val : nums){
            m[val]++ ; 
            largest = max(largest , val) ; 
           
        }
        for(auto val : m){
            if(val.first > mx && val.second == 1){
                mx = max(mx , val.first) ; 
            }
        }
        if(n == k )return largest; 
        if(k == 1) return mx ; 
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
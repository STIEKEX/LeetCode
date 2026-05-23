class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        int n = nums.size() ; 
        int mx = INT_MIN ;  

        unordered_map<int , int>m ;

        for(int val : nums){
            // m[val]++ ; 
            m[val] = val ;
            mx = max(mx ,val) ;
        }

        for(auto val : m){

            int x = val.first ;

            for(int i = x*2 ; i<=mx ; i+=x){
                
                if(m.find(i) != m.end()){
                   m[i] = min(m[i] , x) ; 
                }
            }
        }
        long long sum = 0 ;

        for(int i = 0 ;i<n ; i++){
            sum += m[nums[i]] ; 

        }
        return sum ; 

        
        
    }
};
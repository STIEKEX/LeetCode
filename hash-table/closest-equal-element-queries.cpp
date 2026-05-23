class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        unordered_map<int , vector<int>>m ; 

        int n = nums.size() ;

        for(int i = 0 ; i<nums.size() ; i++){
            m[nums[i]].push_back(i) ; 
        }

        vector<int>ans ; 

        for(int i = 0 ; i<queries.size() ; i++){
            int mn = INT_MAX ;
            int q = queries[i] ; 
            int val = nums[q] ; 

            if(m.find(val) != m.end()){

                vector<int> &a = m[val]; 

                if(a.size() == 1) {
                    ans.push_back(-1) ;
                    continue ; 
                }
                int pos = lower_bound(a.begin() , a.end() , q) - a.begin() ; 
               

                int left = a[(pos-1 + a.size()) % a.size()]; 
                int d1 = abs(q - left) ; 
                mn = min(mn , min(d1 , n-d1)) ; 

                int right = a[(pos+1) %a.size()]  ; 

                int d2 = abs(q- right) ; 
                mn = min(mn , min(d2 , n-d2)) ; 
            }
            if(mn == INT_MAX){
                ans.push_back(-1) ; 
            }
            else{
                ans.push_back(mn) ; 
            }

            

            
        }
        return ans; 
    }
};
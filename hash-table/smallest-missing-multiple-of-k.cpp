class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>m ;

        for(int val : nums){
            m[val]++ ;
        }
        

       int i = 1;
        while(true){
            int val = k*i ;
            if(m.find(val) == m.end()){
                return val ;
            }
            i++ ;
        }
        return -1; 
    }
};
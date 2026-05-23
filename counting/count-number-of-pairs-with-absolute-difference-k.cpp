class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int ,int>m ;
        int count = 0 ;

        for(int num : nums){
            
            if(m.find(num - k) != m.end()){
                count += m[num - k] ;
            }
            if(m.find(num+k) != m.end()){
                count += m[num + k]; 
            }
            m[num]++ ;


        }
       
        return count ;
        
        
    }
};
class Solution {
public:
        static bool com(string s1 ,string s2){

            if(s1.size() != s2.size()){
                if(s1.size() > s2.size()) return true ; 
                else return false ;
            }
            if(s1 > s2) return true ;
            else return false ;
        }
    string kthLargestNumber(vector<string>& nums, int k) {
        
        sort(nums.begin() , nums.end() , com) ; 
        return nums[k-1] ;
        
    }
};
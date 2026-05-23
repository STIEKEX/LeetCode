class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size() ; 

        int cost = 0 ;

        sort(nums1.begin() , nums1.end()) ; 

        sort(nums2.begin() , nums2.end()) ;

        if(nums1 == nums2) return 0 ; 

        unordered_map<int ,int>m ;

        for(int val : nums2){
            m[val]++ ;
        }

        for(int val : nums1){
            m[val]++ ;
        }
        bool isone = true ;
        for(auto val : m){
            if(val.second % 2 != 0){
                return -1 ;
            }
        }
        for(auto val : m){
            if(val.second > 1){
                isone = false; 
                break ;
            }
        }
        if(isone) return -1 ;

        unordered_map<int ,int>first , second ; 

        for(int val : nums1){
            first[val]++ ;
            
        }
        for(int val : nums2){
            second[val]++ ;
        }

        for(auto val : m){
            int num = val.first ; 
            int freq  = val.second/2 ; 

            if(first[num] > freq){
                cost += first[num] - freq ;
            }
        }
        return cost ;
        
    }
};
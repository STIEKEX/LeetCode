class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int>arr ; 

        

        for(int val : nums){
            if(val < pivot){
                arr.push_back(val) ;
            }
        }

        for(int val : nums){
            if(val == pivot){
                arr.push_back(val) ;
            }
        }

        for(int val : nums){
            if(val > pivot){
                arr.push_back(val) ;
            }
        }
        return arr ;
        
    }
};
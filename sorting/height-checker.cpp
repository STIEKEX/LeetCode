class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>original ; 
        int count = 0 ; 
        for(auto num : heights){
            original.push_back(num) ;
        }
        sort(heights.begin(), heights.end()) ;
        

        for(int i= 0 ; i<heights.size() ; i++){
            if(heights[i] != original[i]){
                count++ ; 
            }
        }
        return count ; 
        
    }
};
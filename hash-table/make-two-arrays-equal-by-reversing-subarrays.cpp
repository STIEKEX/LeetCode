class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n = arr.size() ; 
        
        sort(arr.begin() , arr.end()) ; 
        sort(target.begin() , target.end()) ; 
        
        int i = 0 , j = 0 ; 
        
        while(i < n){
            if(target[i] != arr[i]){
                return false ;
            }
            i++ , j++ ; 
        }
        return true ;
        
        
    }
};
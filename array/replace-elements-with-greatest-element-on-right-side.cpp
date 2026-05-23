class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int n = arr.size()-1 ; 
        int maximum = -1 ; 
        for(int i = n ; i>= 0 ; i--){
           int val = arr[i] ;
            arr[i] = maximum ;

            maximum = max(val , maximum) ;
        }
        return arr ;

        
    }
};
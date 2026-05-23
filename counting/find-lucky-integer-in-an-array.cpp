class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map<int , int> m ;

        for(int val : arr){
            m[val]++ ;
        }

        int largest = -1;

        for(auto val : m){
            if(val.first == val.second){
                largest = max(largest , val.second) ;
            }
        }
        return largest ;
        
    }
};
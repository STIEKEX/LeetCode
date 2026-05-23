class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size() ; 

        set<int>s(arr.begin() , arr.end()) ; 

        vector<int>sorted ; 

        for(int val : s){
            sorted.push_back(val) ;
        }

        // sort(sorted.begin() , sorted.end()) ; 

        unordered_map<int ,int> m ; 

        for(int i = 1 ;i <= sorted.size() ; i++){
            m[sorted[i-1]] = i ;
        }

        for(int i = 0 ;i<n ; i++){
            int rank = m[arr[i]] ;
            // if(rank == 0) {
            //     arr[i] = 1 ;
            // }
            // else{
            //     arr[i] = rank ;
            // }
            arr[i] = rank ;

        }
        return arr ;
        
    }
};
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        unordered_map<int , int>m ; 

        for(int val : arr){
            m[val]++ ;
        }

        priority_queue<
        pair<int ,int> , 
        vector<pair<int , int>> , 
        greater<pair<int , int>>
        >q ;

        for(auto val : m){
            q.push({val.second , val.first}) ;
        }

       while(!q.empty() && k >= q.top().first){
        k -= q.top().first ; 
        q.pop() ;
       }
        return q.size() ; 


        
    }
};
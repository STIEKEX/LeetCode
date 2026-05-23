class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string ,int>m; 
        
        for(string s : words){
            m[s]++ ;
        }
        
        priority_queue<pair<int,string> , vector<pair<int , string>> , greater<pair<int , string>>> pq ; 
        for(auto val : m){
                pq.push({-val.second , val.first}) ; 
            }
        
        vector<string>ans; 
        while(k != 0){
            ans.push_back(pq.top().second) ; 
            pq.pop() ; 
            k-- ;
        }
        return ans ;
        
    }
};
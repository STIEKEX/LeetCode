class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int> m ;

        for(char ch : s){
            m[ch]++ ; 
        }
        priority_queue<pair<int , char>> q ; 

        for(auto val : m){
            q.push({val.second , val.first}) ;
        }

        string ans = "" ;
        while(!q.empty()){
            int count = q.top().first; 

            for(int i = 0 ; i<count ; i++){
                ans += q.top().second ;
            }
            q.pop() ;
        }
        return ans ;
    }
};
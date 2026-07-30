class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char ,int>m ; 
        for(char ch : word){
            m[ch]++ ; 
        }
        
        
        priority_queue<pair<int  ,char>>q ; 

        for(auto val : m){
            q.push({val.second , val.first}) ; 
        }
        
        int cnt = 0 ;
        int i = 1 ; 
        while(!q.empty()){
            int freq = q.top().first ; 
            q.pop() ; 
                if(i <= 8){
                    cnt += freq  ;
                }
                else if(i > 8 && i <= 16){
                    cnt += freq * 2 ; 
                }
                else if(i > 16 && i <= 24){
                    cnt += freq * 3 ; 
                }
                else if(i == 26 || i == 25){
                    cnt += freq * 4 ; 
                }
                i++ ; 

            
        }
        return cnt ;

        
    }
}; 
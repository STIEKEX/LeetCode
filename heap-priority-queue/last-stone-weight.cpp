class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int>p(stones.begin() , stones.end()) ; 

        while(p.size() > 1){
            int x = p.top() ;
            p.pop() ; 
            int y = p.top() ; 
            p.pop() ; 
            if(x != y){
                int diff = x-y ; 
                p.push(diff) ; 
            }

        }
        if(p.size() == 0){
            return 0 ;
        }
        return p.top() ; 
        
    }
};
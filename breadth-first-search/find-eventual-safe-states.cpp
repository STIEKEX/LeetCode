class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size() ;
        
        vector<vector<int>>revgraph(n) ; 

        for(int i = 0 ; i<n ; i++){
            for(int val : graph[i]){
                revgraph[val].push_back(i) ;
            }
        }

        vector<int>in(n , 0) ;

        for(int i = 0 ; i< n ; i++){
            for(int val : revgraph[i]){
                in[val]++ ;
            }
        }

        queue<int>q ; 
        for(int i = 0 ; i<n  ; i++){
            if(in[i] == 0){
                q.push(i) ;
            }
        }

        vector<int>ans ; 

        while(q.size() > 0){
            int node = q.front() ; 
            q.pop() ; 
            ans.push_back(node) ;
            for(int val : revgraph[node]){
                in[val]-- ;
                if(in[val] == 0){
                    q.push(val) ;
                }
            }
        }

        sort(ans.begin() , ans.end()) ; 
        return ans; 
        
    }
};
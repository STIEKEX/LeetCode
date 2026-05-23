class Solution {
public:
        bool bfs(vector<vector<int>>& graph , vector<int>&color){
            int n = graph.size() ; 

            for(int i = 0 ; i < n ; i++){

                if(color[i] == -1){
                    queue<int>q ; 
                    q.push(i) ; 
                    color[i] = 1 ; 

                    while(q.size() > 0){
                        int curr = q.front() ; 
                        q.pop() ; 

                        for(int val : graph[curr]){
                            if(color[val] == -1){
                                color[val] = 1 - color[curr] ; 
                                q.push(val) ;
                            }
                            else if(color[val] == color[curr]) return false; 
                        }
                    }
                }
            }
            return true ;
        }
    bool isBipartite(vector<vector<int>>& graph) {
        int m = graph.size() ; 
        vector<int>color(m , -1) ; 

        return bfs(graph , color) ; 

        
    }
};
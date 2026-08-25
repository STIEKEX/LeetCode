class Solution {
public:
    bool bfs(vector<vector<int>>&graph , vector<int>&color){

        int n = graph.size() ; 

        for(int i = 0 ; i<n ; i++){

            if(color[i] == -1){

                queue<int>q ; 
                q.push(i) ; 

                color[i] = 1 ; 

                while(q.size()){
                    int u = q.front() ; 
                    q.pop() ; 


                    for(int val : graph[u]){
                        if(color[val] == -1){
                            color[val] = 1 - color[u] ; 
                            q.push(val) ; 
                        }
                        else if(color[val] == color[u]){
                            return false ;
                        }
                       
                    }
                }
                
            }
            
        }
        return true ;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size() ; 
        vector<int>color(n , -1) ; 

        return bfs(graph , color) ; 
        
    }
};
class Solution {
public:
    vector<int>parent ; 

    int find(int x){
        if(parent[x] == x){
            return x ;
        }
        return parent[x] = find(parent[x]) ; 
    }

    bool unite(int u , int v){
        int parU = find(u) ; 
        int parV = find(v) ; 


        if(parU == parV) return false ;

        parent[parU] = parV ; 

        return true ;
        
        
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size() ; 
        parent.resize(n+1) ; 


        for(int i = 1 ; i<=n ; i++){
            parent[i] = i ; 
        }

       for(auto val : edges){
        int u = val[0] ; 
        int v = val[1] ; 

        if(!unite(u , v)){
            return val ;
        }
       }
       return {} ; 


        
    }
};
class Solution {
public:
    vector<int>parent , rank ;
    int find(int x){
        if(parent[x] == x) return x ;

        return parent[x] = find(parent[x]) ; 
    }

    bool unite(int a , int b){
        int pa = find(a) ; 
        int pb = find(b) ; 

        if(pa == pb) return false ;

        if(rank[pa] < rank[pb]){
            parent[pa] = pb  ;
        }
        else if(rank[pb] < rank[pa]){
            parent[pb] = pa ; 
        }
        else{
            parent[pa] = pb  ;
            rank[pb]++ ; 
        }
        return true ;
    }

    int dis(vector<vector<int>>&points , int a ,int b){

        return abs(points[a][0] - points[b][0]) + abs(points[a][1] - points[b][1])  ; 
    }
    int minCostConnectPoints(vector<vector<int>>& points) {

        int n = points.size() ; 

        parent.resize(n) ; 
        rank.resize(n , 0) ; 

        for(int i = 0 ; i<n ; i++){
            parent[i] = i ; 
        }

        vector<tuple<int ,int, int>>nums ; 

        for(int i = 0 ; i<n ; i++){
            for(int j = i +1 ; j<n ; j++){
                int w = dis(points , i , j) ; 
                nums.push_back({w , i , j}) ; 
            }
        }
        sort(nums.begin() , nums.end())  ;
        int cost = 0 ; 
        int cnt = 0 ; 
        for(auto[w , u , v] : nums){
            if(unite(u , v)){
                cost += w ; 
                cnt++ ; 
            }
            if(cnt == n-1) break ; 
        }
        return cost ;


        
    }
};
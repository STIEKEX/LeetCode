class Solution {
public:
    int ans = INT_MIN ; 
    

    vector<vector<int>>arr ; 

    int dis(int a , int b){
        int mn = INT_MAX;
        for(auto val : arr){
            int x = val[0] ; 
            int y = val[1] ; 

            mn = min(mn,  abs(a - x) + abs(b -y)) ; 
        }
        return mn; 
    }

    void solve(int i , int j , int n , vector<vector<bool>>&seen , vector<vector<int>>&grid , int curr){
        if(i < 0 || j < 0 || i>=n || j>=n || seen[i][j]) return ; 


        curr = min(curr ,dis(i , j) ) ; 
       
        if(i == n-1 && j == n-1){
            ans = max(ans , curr) ; 
            return ;
        }
         seen[i][j] = true ; 

        solve(i+1 , j , n , seen , grid , curr) ; 
        solve(i-1 , j , n , seen , grid, curr) ; 
        solve(i , j+1 , n , seen , grid , curr) ; 
        solve(i , j-1 , n , seen , grid , curr) ; 

        seen[i][j] = false ; 

    }
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size() ; 

        for(int i = 0; i<n ; i++){
            for(int j = 0 ; j<n ; j++){

                if(grid[i][j] == 1){
                    arr.push_back({i,j}) ; 
                }
            }
        }

        
        vector<vector<bool>>seen(n , vector<bool>(n ,false)) ; 


        solve(0 , 0 , n, seen , grid , INT_MAX) ; 
        return ans; 

        


        
    }
};
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 

        vector<long long >arr; 
        int rem = grid[0][0] %x ; 
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){

                if(grid[i][j] % x != rem){
                    return -1 ;
                }
                else{
                    arr.push_back(grid[i][j]) ; 
                }
            }
        }
        sort(arr.begin() , arr.end()) ; 

        int size = arr.size()-1 ; 
        int mid = size/2 ; 

        int val = arr[mid] ;

        int count = 0 ; 

        for(int i = 0 ; i<= size ; i++){
            
            count += abs(arr[i] - val) / x ; 
        }
        return count ;
        
    }
};
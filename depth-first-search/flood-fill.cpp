class Solution {
public:
    vector<vector<bool>>seen ; 
    void dfs(int i , int j , int m , int n  , vector<vector<int>>&nums , int color , int og){
        if(i < 0 || j < 0 || i>= m || j >= n || seen[i][j] || nums[i][j] != og) return ;


        nums[i][j] = color ; 
        seen[i][j] = true ;
        dfs(i+1 , j , m , n ,  nums , color , og) ; 
        dfs(i , j+1 , m , n ,  nums , color , og) ; 
        dfs(i , j-1 , m , n ,  nums,  color , og) ; 
        dfs(i-1 , j , m , n ,  nums,  color , og) ; 
        return ;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) return image ;
        int m = image.size() ; 
        int n = image[0].size() ; 
        int og = image[sr][sc] ; 
        seen.resize(m , vector<bool>(n , false)) ; 
        dfs(sr , sc , m , n , image , color , og) ; 
        return image ; 
        
    }
};
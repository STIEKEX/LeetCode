class Solution {
public:    
        void dfs(int i , int j ,int m , int n , vector<vector<int>>& image ,int color , int og){
            if(i < 0 || j < 0 || i>=m || j>= n || image[i][j] == color || image[i][j] != og) return ;
            image[i][j] = color ;
            
            dfs(i-1 , j , m , n , image , color, og) ; 
            dfs(i+1 , j , m , n , image , color, og) ; 
            dfs( i , j+1 , m , n , image ,color, og) ; 
            dfs(i , j-1  , m , n , image , color, og) ; 

            
        }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int m = image.size() ; 
        int n = image[0].size() ; 
        int og = image[sr][sc] ; 

        
        dfs(sr , sc , m , n , image , color, og) ; 
                
         
        
        return image ; 

        
    }
};
class TreeAncestor {
public:
    /*
    if we have to make 2 to the power j jump we will make
    */
    vector<vector<int>>an ; // if i take 2 to the power j jump form the node which node i will reach that info we will store in this 2d array : row mean node and col mean jump 
    int row ; 
    int col ; 
    TreeAncestor(int n, vector<int>& parent) {
         row = n ; 
        col = log2(n) +1;  // how many col we need to get n  2 to power j = n  so 

        an.resize(row , vector<int>(col, -1)) ; 

        for(int i = 0 ; i<n ; i++){
            an[i][0]= parent[i] ; 
        }

        for(int j = 1 ; j<col ; j++){

            for(int i = 0 ; i<row ; i++){
                if(an[i][j-1] != -1){
                    an[i][j] = an[an[i][j-1]][j-1] ; 
                } // if we have to make 2 to the power j jump -> we will make 2 to the power j-1 + 2 to the power j-1 jump
            }
        }
        
    }
    
    int getKthAncestor(int node, int k) {

        for(int i = 0;  i<col ; i++){

            if(k & (1 << i)){ // if i th bit of k is set or not ? 
                node = an[node][i] ; 

                if(node == -1) return -1 ;
            }
        }
        return node ;
        
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */
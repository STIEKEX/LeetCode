class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        if(blocks.size() < k) return 0 ;

        int n = blocks.size() ; 
        int b = 0 ; 
        int w = 0 ; 
        int i ;

        for( i = 0 ; i<k ; i++){
            if(blocks[i] == 'W'){
                w++ ;
            }
            
        }
        int op = INT_MAX ;
        op =  min(op , w) ;

        for(int i = k ; i <blocks.size() ; i++){

            if(blocks[i-k] == 'W'){
                w-- ;
            }
            if(blocks[i] == 'W'){
                w++ ;
            }
            op = min(op , w) ;
        }
        return op ;
       


        
    }
};
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans ; 
        int n = boxes.size() ;
        

        for(int i=0 ; i<n ; i++){
            int move = 0 ;
            for(int j=0 ; j<n ; j++){
                if(i==j){
                    continue ;
                }
                else if(boxes[j] == '1'){
                     move+=abs(j-i) ;
                    
                }
            }
             ans.push_back(move) ;
        }
        return ans ;

        
    }
};
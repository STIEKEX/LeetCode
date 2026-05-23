class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans ; 
        int N = target.size() ; 
        int j = 1 ;
        int i = 0 ;
        while(i < N){
            if(target[i] == j){
                ans.push_back("Push") ;
                j++ ;
                i++ ;
            }else{
                ans.push_back("Push") ;
                ans.push_back("Pop") ;
                j++ ;

            }
            
        }

        
        return ans ;
        
        
        
    }
};
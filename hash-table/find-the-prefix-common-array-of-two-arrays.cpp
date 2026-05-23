class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {

        int n = a.size() ; 
        vector<int>ans(n) ; 

        // ans[0] = 0 ; 

        vector<bool>seen(50, false) ; 

        int count = 0 ; 

        int i = 0  ;

        while(i < n){
            if(a[i] == b[i]) count++ ; 
           if(seen[a[i]]) count++ ; 
           if(seen[b[i]]) count++ ; 

           ans[i] = count ; 
           seen[a[i]] = true ; 
           seen[b[i]] = true ; 
           i++ ; 
        }
        return ans ; 

     


        
    }
};
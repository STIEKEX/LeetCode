class Solution {
public:
    vector<int> longestRepeating(string s, string q, vector<int>& idx) {
        int n = s.size() ; 

        vector<int>arr ;
        int j = 0 ;
        for(int val: idx){

            s[val] = q[j] ; 
            int len =  1 ;
            int ans = 1 ;
            for(int i = 0 ; i<n-1 ; i++){
                if(s[i] == s[i+1]){
                    len++ ; 
                }
                else{
                    len = 1; 
                }
                ans = max(ans , len) ; 
            }
            arr.push_back(ans) ; 
                j++ ; 
            
        }
        return arr ;
       
        
    }
};
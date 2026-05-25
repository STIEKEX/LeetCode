class Solution {
public:
    string lastNonEmptyString(string s) {
       
       int n = s.size() ; 

       vector<int>erase(n , true ) ; 

       unordered_map<int ,int>m ; 

       int mx = INT_MIN ; 

       for(int val : s){
        m[val]++ ; 
       
       }

       for(auto val : m){
        mx = max(val.second , mx) ; 
       }

       int j = n-1 ; 
        string ans = "" ; 
        vector<bool>seen(500 , false) ; 
       while(j >= 0){
            char ch = s[j] ; 
            int frq = m[ch] ; 

            if(!seen[ch] && frq == mx ){
                seen[ch] = true ; 
                ans += ch ; 
            }
            j-- ; 
       }
       reverse(ans.begin() , ans.end()) ; 
       return ans ;
    }
};
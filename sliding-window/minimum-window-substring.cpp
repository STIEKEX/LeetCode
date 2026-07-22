class Solution {
public:
    string minWindow(string s, string t) {
        

        unordered_map<char ,int>m ; 

        for(char ch : t){
            m[ch]++ ; 
        }
        int cnt = m.size() ; 


        int i = 0 , j = 0 ; 

        int mn = INT_MAX ; 
        int start = 0   ; 
        while(j<s.size()){
            char ch = s[j] ; 

            if(m.find(ch) != m.end()){
                m[ch]-- ; 
                if(m[ch] == 0){
                    cnt-- ; 
                }
            }
            if(cnt == 0){
                
                while(i<s.size() && cnt == 0){
                    if(j-i+1 < mn){
                         mn = j-i+1 ; 
                         start = i ; 
                    }
                    if(m.find(s[i]) == m.end()){
                        i++ ; 
                    }
                    else{
                        m[s[i]]++ ; 
                        if(m[s[i]] > 0){
                            cnt++ ; 
                        }
                        i++ ; 
                    }
                   
                }
            }
            j++ ; 
        }
        if(mn == INT_MAX) return "" ; 
        return s.substr(start , mn) ; 
    }
};
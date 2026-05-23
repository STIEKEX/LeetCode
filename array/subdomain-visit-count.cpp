class Solution {
public:
    vector<string> subdomainVisits(vector<string>& d) {
        int n = d.size() ; 
                
        unordered_map<string ,int> m ; 
        for(string str : d){
            string digit = "" ;
            
            int i = 0 ;
            for( i = 0 ; i<str.size() ; i++){
                if(str[i] == ' '){
                    break ;
                }
                else{
                    digit += str[i] ; 
                }
            }
            int count = stoi(digit) ; 
            
            int pos = str.find(" ") ; 
            string domain = str.substr(pos+1) ; 
            m[domain] += count ;
            
            while(domain.find('.') != string::npos){
                pos = domain.find('.'); 
                domain = domain.substr(pos+1)  ;
                m[domain]+= count ;
               
                
            }
               
        }
        
        vector<string>sol ; 
        
        for(auto val : m){
            int digit = val.second ;
            string domain = val.first ;
            string strDigit = to_string(digit) ; 
            string ans = strDigit + " " ; 
            ans += domain ; 
            
            sol.push_back(ans) ; 
        }
        return sol ;
    }
        
        // 9001 discuss.leetcode.com : 
        // 9001 leetcode.com ; 
        // 9001 com : 
};
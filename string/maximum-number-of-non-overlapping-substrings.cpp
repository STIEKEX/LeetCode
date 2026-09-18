class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {

        int n = s.size() ; 

        vector<int>first(26 , -1) ; 
        vector<int>last(26 , -1) ; 

        for(int i = 0 ; i<n ; i++){

            int idx = s[i] - 'a' ; 

            if(first[idx] == -1){
                first[idx] = i ; 
            }
            last[idx] = i ;
        }

        vector<pair<int ,int>>interval ; 

        for(int i = 0 ;i<26 ; i++){

            if(last[i] == -1 )continue ;

            int l = first[i] ; 
            int r = last[i] ; 
            bool valid = true ;
            for(int j = l ; j<=r ; j++){
                
                int d = s[j] - 'a' ; 
                // bool valid = true ;
                if(first[d] < l){      
                    valid = false ;
                    break ;
                }

                r = max(r , last[d]) ; 
                
            }
            if(valid){
                interval.push_back({r ,l}) ; 
            }
        }
        sort(interval.begin() , interval.end()) ; 

        vector<string>ans ; 
        int prev = -1 ;
        for(auto[r , l] : interval){

            if(l > prev){
                ans.push_back(s.substr(l , r-l+1)) ; 
                prev = r ;
            }
        }
        return ans; 
       
        
    }
};
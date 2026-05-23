class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        
        int n = words.size() ;
        vector<string>ans ;

        for(int i = 0 ; i<n ; i++){
            string word = words[i] ; 

            for(string val : words){
                if(val != word){
                    if(val.find(word) != string::npos){
                        ans.push_back(word) ;
                        break ; 
                    }
                }
            }

        }
        return ans ;
    }
};
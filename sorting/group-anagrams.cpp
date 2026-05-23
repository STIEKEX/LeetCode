class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string ,vector<string>>mp ; 

        for(string val : strs){
            string word = val ; 
            sort(word.begin() , word.end());
            mp[word].push_back(val) ;
        }

        vector<vector<string>> result ; 
        for(auto val : mp){
            result.push_back(val.second) ;

        }
        return result ;
        
    }
};
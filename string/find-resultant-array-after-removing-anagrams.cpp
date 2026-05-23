class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>result ;
        string prevsig = "" ;

        for(auto w : words){
            string sig = w ; 
            sort(sig.begin(), sig.end()) ;
            if(sig != prevsig){
                result.push_back(w) ;
                prevsig = move(sig) ;
            }
        }
        return result ;
        
    }
};
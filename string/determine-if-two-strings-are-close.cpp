class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() > word2.size() || word2.size() > word1.size()) return false ;


        unordered_map<char ,int>m1 , m2 ; 

        for(char ch : word1){
            m1[ch]++ ;
        }

        for(char ch : word2){
            m2[ch]++ ;
        }

        for(auto val : m1){
            if(m2.find(val.first) == m2.end()) return false; 
        }

         for(auto val : m2){
            if(m1.find(val.first) == m1.end()) return false; 
        }

        vector<int>v1 , v2 ; 

        for(auto val : m1){
            v1.push_back(val.second) ; 
        }
        for(auto val : m2){
            v2.push_back(val.second) ; 
        }
        sort(v1.begin() , v1.end()) ; 
        sort(v2.begin() , v2.end()) ;
        return v1 == v2 ; 
        
    }
};
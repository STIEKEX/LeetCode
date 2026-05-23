class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char ,int>m1 ; 

        for(char ch : s){
            m1[ch]++ ;
        }

        unordered_map<char , int>m2 ; 

        for(char ch : target){
            m2[ch]++ ;
        }

        int count = INT_MAX ;
        for(int i = 0 ; i<target.size() ; i++){
            
            count = min(m1[target[i]] / m2[target[i]] , count);
            
        }
        return count ;



        
    }
};
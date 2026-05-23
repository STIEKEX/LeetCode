class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char ,int>m1 ;
        unordered_map<char ,int>m2 ;

        for(char ch : ransomNote){
            m1[ch]++ ;
        }

        for(char ch :magazine){
            m2[ch]++ ;
        }

        for(auto val : m1){
            if(m2.find(val.first) != m2.end()){
                if(val.second > m2[val.first]){
                    return false; 
                }
            }else{
                return false; 
            }
        }


        
        return true ;

    }
};
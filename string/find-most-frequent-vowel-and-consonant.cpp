class Solution {
public:
        bool isvow(char ch){
            if(ch =='a' ||ch =='i' ||ch =='o' ||ch =='u' ||ch =='e' ){
                return true ;
            }
            return false ;
        }
    int maxFreqSum(string s) {
        unordered_map<char ,int > vow ;
        unordered_map<char ,int > cons;
        if(s.size() == 0){
            return 0 ;
        }

  


    for(char val : s){
        if(isvow(val)){
            vow[val]++ ;
        }else{
            cons[val]++ ;
        }
    }
    int vowel = 0 ;
    int con = 0 ;

    for(auto ch : vow){
        if(vowel < ch.second){
            vowel = ch.second ;
        }
    }

      for(auto ch : cons){
        if(con < ch.second){
            con = ch.second ;
        }
    }

    return vowel +con ;




        




        
    }
};
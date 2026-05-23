class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        int ans = 0 ;

        unordered_map<char ,int>m ;

        for(char ch : chars){
            m[ch]++ ;
        }


        for(string val : words){
            unordered_map<char ,int>base = m ;
            bool isfound = false; 
            for(char ch : val){

                if(base.find(ch) != base.end()){
                    if(base[ch] > 0){
                        base[ch]-- ;
                        isfound = true ;
                        

                    }else{
                        isfound = false ;
                        break ;
                    }
                    
                }
                else{
                    isfound = false ;
                    break ;
                }
            }
            if(isfound){
                ans += val.size() ;
            }
        }
        return ans ;

        
    }
};
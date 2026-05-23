class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {


        vector<int>str(26 , 0) ;

        for(char ch : allowed){
            str[ch-'a']++ ;
        }
        int ans = 0 ;
        for(string val : words){
            bool allFound = false;
            for(char ch : val){

                if(str[ch-'a'] != 0){
                    allFound = true ;
                }
                else{
                    allFound = false ;
                    break ;
                }



            }
            if(allFound){
                ans++ ;
            }
        }
        return ans ;
        
        
    }
};
class Solution {
public:
        bool isvow(char ch){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                return true ;
            }
            return false ;
        }

    int atmost(string word , int k){
        int n = word.size() ; 
        unordered_map<char , int> m; 
        int i = 0 ;
        int j = 0 ; 
        int count = 0 ;
        int ans = 0 ;
       

        while(j < n){

            if(!isvow(word[j])){
                m.clear() ; 
                i = j+1; 
                j++ ;
                count = 0 ;
                continue ;
            }
            if(isvow(word[j])){
                m[word[j]]++ ;
            }

            if(m[word[j]] == 1){
                count++ ;;
            }
            while(count > k){
                m[word[i]]-- ; 
                if(m[word[i]] == 0){
                    count-- ;

                }
                i++ ;
            }
            ans += j-i+1;
            j++ ;
            

        }
        return ans ;

    }
    int countVowelSubstrings(string word) {
        int k = 5 ; 
        return atmost(word , k) - atmost(word, k-1) ;
        
    }
};
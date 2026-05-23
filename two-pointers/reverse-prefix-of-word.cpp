class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.find(ch) ;
        if(n==0){
            return word ;
        }
        
       
        reverse(word.begin(), word.begin()+n+1);
        return word ;
    }
};
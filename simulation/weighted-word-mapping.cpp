class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& w) {
            

            unordered_map<int , char>m1 ; 

           for(int i = 0 ; i<26 ; i++){
            char ch = 'z' - i ; 
            m1[i] = ch ; 
           }

           unordered_map<char ,int>m2 ;

           for(char ch = 'a' ; ch <= 'z' ; ch++){
                int val = ch - 'a' ; 
                m2[ch] = w[val]  ;
           }

            string ans = "" ; 
           for(string val : words){

                int sum = 0 ; 
                for(char ch : val){
                    int x = m2[ch]  ;
                    sum += x ; 
                }
                int y = sum % 26 ; 
                ans += m1[y] ; 
           }
           return ans ;


            

        

        
    }
};
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size() ; 

       unordered_map<char ,vector<int>>m ; 

       for(int i = 0 ; i<n ; i++){
            
            m[word[i]].push_back(i) ; 
       }

       int count = 0 ;      



        for(int i = 0 ; i<n ; i++){

            if(word[i] >= 'A' && word[i] <='Z'){

                char ch = tolower(word[i]) ; 
                bool spec = true ; 

                if(m.find(ch) != m.end()){

                    vector<int>&temp = m[ch] ; 

                    for(int val : temp){
                        if(val > i){
                            spec = false ;
                            break ; 
                        }
                    }
                    if(spec)count++ ; 
                }
                
            }
        }
        return count ;

        
    }
};
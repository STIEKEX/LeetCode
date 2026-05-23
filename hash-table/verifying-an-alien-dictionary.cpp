class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        int n = words.size() ; 

        unordered_map<char ,int>m ; 

        for(int i = 0 ; i<order.size() ; i++){
            m[order[i]] = i ; 
        }

        for(int i = 1 ; i<n ; i++){

            string one = words[i-1] ;
            string two = words[i] ; 

            int size = min(one.size() ,two.size()) ; 
            
            bool is = false ;
            for(int j = 0 ; j<size ; j++){

                if(one[j] != two[j]){

                    if(m[one[j]] > m[two[j]]) {
                        return false ; 
                        
                    }
                    is = true ; 
                    break ; 

                }
            }
            if(!is && one.size() > two.size()) return false ;
       }
       return true ;

    }
};
class Solution {
public:
    int canBeTypedWords(string text, string letters) {
        stringstream ss(text) ;
        int k = 0 ;

        unordered_map<int,int>m;
        for(char val : letters){
            m[val] ;
        }
        
        string world ;

        while (ss >> world) {           
        bool isfound = true;

      
        for (char ch :world ) {
            if(m.find(ch) !=m.end()){
                isfound = false;
                break;
            }
        }
        if(isfound == true ){
            k++ ;
        }

    }
    return k ;
    }
};
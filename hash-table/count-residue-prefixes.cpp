class Solution {
public:
    int residuePrefixes(string s) {

        string str = "" ;
        int ans = 0 ;
        
        for(char ch : s){
            str += ch ; 
            int count = 0 ;
            vector<bool>seen(200 ,false) ;
            for(char ch : str){
                if(!seen[ch-'a']){
                    count++ ;
                    seen[ch-'a'] = true ;
                }
            }
            int l = str.size() % 3 ;

            if(count == l){
                ans++ ;
            }
                

            
        }
        return ans ;
        
    }
};
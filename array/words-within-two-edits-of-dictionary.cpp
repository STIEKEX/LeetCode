class Solution {
public:
    vector<string> twoEditWords(vector<string>& q, vector<string>& dic) {

        vector<string>ans; 

        int i = 0 , j = 0 ; 

        while(i < q.size()){

            string str1 = q[i] ; 

            for(string val : dic){
                int diff = 0 ;
                if(str1.size() != val.size()) continue ; 
                for(int i = 0 ; i<val.size(); i++){
                    if(str1[i] != val[i]){
                        diff++ ;
                          if(diff > 2) break;  
                    }
                } 
                // bool is = false ;
                if(diff <= 2){
                    ans.push_back(str1) ; 
                    break ;
                }  
            }
            i++ ;
        }
        return ans ;
        
    }
};
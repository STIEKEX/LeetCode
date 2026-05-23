class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0 ; 
        string age = "" ;
        

        for(string str : details){
           age = str.substr(11,2) ;

           if(stoi(age)>60){
            ans++ ;
           }
        
            
        }
        return ans ;
        
    }
};
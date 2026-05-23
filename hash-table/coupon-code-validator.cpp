class Solution {
public:
        bool validcode(string str){
            bool isvalid = false ;
            for(char val: str){
                if( val >= 'a' && val <='z' || val >= 'A' && val<='Z' || val >= '0' && val<= '9' || val == '_'){
                    isvalid = true   ;
                }else{
                    return false ;
                }
            }
            if(isvalid == true){
                return true; 
            }
            return false; 
        }

        bool validbusinessLine(string str){
            if(str == "electronics" || str ==  "grocery" || str ==  "pharmacy" || str ==  "restaurant"){
                return true ;
            }
            return false; 
        }

        
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n = code.size()  ;

        unordered_map<string ,int>mp = {
            {"electronics", 0},
            {"grocery", 1},
            {"pharmacy", 2},
            {"restaurant", 3}
        } ;
    
        
        vector<pair<int , string>>valid ;

        for(int i = 0 ; i<n ; i++){
            if(validcode(code[i]) && validbusinessLine(businessLine[i]) && isActive[i] == true){
                // result.push_back(code[i]);
                valid.push_back({mp[businessLine[i]], code[i]}) ;

            }
        }

        sort(valid.begin() , valid.end()) ;

        vector<string>result ; 
        for(auto &p : valid)
        {
            result.push_back(p.second) ;
        }
        return result ;

        





        
        
        
        
    }
};
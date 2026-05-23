class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        string str   = to_string(n) ; 
        int size = str.size() ; 

        vector<int>ans ; 

        int power = pow(10,size-1) ; 

        for(char ch : str){
            int val = (ch -'0')* power;
            if(val != 0){
            ans.push_back(val) ;
            }
            power = power/10 ;
            
        }
        return ans ;

        


    }
};
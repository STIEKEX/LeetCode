class Solution {
public:
    bool check(string s){
        
        for(int i = 0 ; i<s.size()-1 ; i++){
            int x = s[i] - '0' ; 
            int y = s[i+1] - '0' ; 
            if(x+1 != y) return false; 
        }
        return true; 
    }
    vector<int> sequentialDigits(int low, int high) {
            vector<int>ans ;
        for(int i = low ; i<= high ; i++){

            if(check(to_string(i))){
                ans.push_back(i) ; 

            }
        }
        return ans ;


        
    }
};
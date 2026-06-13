class Solution {
public:
    string multiply(string num1, string num2) {
        
        int x = stoll(num1) ; 
        int y = stoll(num2) ; 
        int z = x * y ; 
        string ans = to_string(z) ; 
        return ans ; 
    }
};
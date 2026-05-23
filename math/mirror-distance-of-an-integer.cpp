class Solution {
public:
    int mirrorDistance(int n) {
        string str = to_string(n) ; 
        reverse(str.begin() , str.end()) ; 
        long long val = stoll(str) ; 
        return abs(n - val) ; 
        
    }
};
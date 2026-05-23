class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size() ;
        int i = 0, j = m; 
        string winStr = "";

        while (j <= n) {  
            winStr.insert(0, haystack, i, m); 
            if (winStr == needle) {
                return i;   
            } else {
                i++;
                j++;
                winStr = ""; 
            }
        }
        return -1;  
    }
};

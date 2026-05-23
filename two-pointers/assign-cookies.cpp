class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

          sort(g.begin(), g.end()); // Sort greed factors
        sort(s.begin(), s.end()); // Sort cookie sizes
        int i = 0, j = 0, count = 0;

        while (i < g.size() && j < s.size()) {
            if (g[i] <= s[j]) {
                count++; // Assign this cookie
                i++;
                j++;
            } else {
                j++; // Try next larger cookie
            }
        }
        return count;
      

        
    }
};
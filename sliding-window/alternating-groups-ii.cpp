class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        
        colors.insert(colors.end() , colors.begin() , colors.begin() + (k-1)) ;
        int n = colors.size() ;

        int i = 0 ;
        int j = 1 ;

        int count = 0 ;

        while(j < n){

            if(colors[j-1] == colors[j]){
                i = j ;
                j++ ;
                continue ;
            }

            if(j-i+1 == k){
                count++ ;
                i++ ;
            }
            j++ ;
        }
        return count ;
        
    }
};
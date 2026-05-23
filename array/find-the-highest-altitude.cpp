class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size() ;
        vector<int> alt(n+1) ; 

        alt[0] = 0 ; 
        int maxEle = 0;
        for(int i=1 ; i<=n ; i++){
            alt[i] = alt[i-1] + gain[i-1] ;
            maxEle = max(maxEle , alt[i]) ;
        }
        return maxEle ;


    }
};
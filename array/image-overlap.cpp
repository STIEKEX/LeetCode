class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size() ;
        int cnt1 = 0 ; 
        int cnt2 = 0 ;

        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){


                if(img2[i][j] == 1)cnt2++ ; 
                if(img1[i][j] == 1)cnt1++ ; 
            }
        }

       
        if(cnt1 == 0 || cnt2 == 0) return 0 ; 

        if(cnt1 < cnt2) return cnt1 ; 
        return cnt2 ; 

    }
};
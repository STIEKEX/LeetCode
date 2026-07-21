class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        // int n = s.size() ; 

        int one = 0 ; 
        for(char ch : s){
            if(ch == '1')one++ ; 
        }

        s = '1' + s +'1' ; 
        int n = s.size() ; 
        int ans = one ; 
        int i = 0 ;
        //skip starting ones ; 
        while(i<n && s[i] == '1'){
            i++ ; 
        }
         //counting left zero ; 
         int leftZero =0  ;
        while(i<n && s[i] == '0'){
                leftZero++ ; 
                i++ ; 
        }

        while(i < n){
           
           
            //counting middle one ; 
            int middleOne = 0 ;
            while(i <n && s[i] == '1'){
                middleOne++ ; 
                i++ ; 
            }
            if(middleOne == 0) break ;
            

            int rightZero = 0 ; 
            while(i <n&& s[i] == '0'){
                rightZero++ ; 
                i++ ; 
            }
            if(rightZero == 0) break ;
            ans = max(ans , one + leftZero + rightZero) ; 
            rightZero = leftZero ; 
        }
        return ans ;
    }
};
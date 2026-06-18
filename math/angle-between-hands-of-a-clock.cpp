class Solution {
public:
    double angleClock(int h, int m) {
        double ans = abs(30*h - 5.5*m) ; 

        if(ans > 180){
            ans = 360 - ans ; 
        }
        return ans ;
    }
};
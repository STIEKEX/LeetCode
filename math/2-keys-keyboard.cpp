class Solution {
public:
    int solve(int n , int curr , int paste){
        if(n == curr) return 0 ; 
        if(curr > n) return INT_MAX/2 ;

        return min(1 + solve(n , curr + paste , paste) , 2+solve(n , curr * 2 , curr) ) ; 
    }
    int minSteps(int n) {
        if(n == 1) return 0 ;
        return 1 + solve(n , 1 , 1)  ;
    }
};
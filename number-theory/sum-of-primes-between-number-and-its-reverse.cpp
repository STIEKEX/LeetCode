class Solution {
public:
    bool isprime(int n ){
        if(n <= 1) return false ;
        for(int i = 2 ; i*i<=n ; i++){
            if(n % i == 0){
                return false ;
            }
        }
        return true ;
    }
    int sumOfPrimesInRange(int n) {
        string str = to_string(n) ; 
        
        reverse(str.begin() , str.end()) ; 
        
        int r = stoi(str) ; 

        int sum = 0 ; 

        for(int i = min(n ,r) ; i<=max(n,r) ; i++){
            if(isprime(i)){
                sum += i ; 
            }
        }

        

       
       
        return sum ;
        
    }
};
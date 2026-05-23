class Solution {
public:
    int countPrimes(int n) {
        vector<bool>isprime(n+1, true) ; 
        int cout = 0 ; 
        for(int i = 2 ; i<n ; i++){
            if(isprime[i]){
                cout++ ; 
                for(int j = i*2 ; j<n ; j= j+i){
                    isprime[j] = false ; 
                }
            }

        }
        return cout ; 
        
    }
};
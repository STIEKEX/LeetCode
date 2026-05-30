class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {

        unordered_map<long long , long long >m ; 
        int ans = 0 ;
        for(int i = 0 ; i<hours.size() ; i++){
            long long rem = hours[i] % 24 ; 
            long long need = (24- rem) % 24 ; 

            ans += m[need] ; 
            m[rem]++ ; 
        }
        return ans; 
        
    }
};
class Solution {
public:
    int takeCharacters(string s, int k) {

        int n = s.size() ; 

        unordered_map<char ,int>m  ;

        for(char ch : s){
            m[ch]++ ;
        }

        if(m['a'] < k || m['b'] < k || m['c'] < k) return -1 ;

        vector<int>arr(3, k) ; 
        
        int i = 0 , j = n-1 ;
        int mx = 0 ; 
        int curr = 0 ; 

        for(int i = 0;  i<n ; i++){

            int x = s[i] - 'a' ; 

            if(arr[x] == 0){
                curr++ ; 
            }
            else{
                arr[x]-- ; 
                curr = 0 ;
            }
            mx = max(mx , curr) ; 
            

        }
        return n - mx ; 


       
        
    }
};
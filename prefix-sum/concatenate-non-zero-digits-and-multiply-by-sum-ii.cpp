class Solution {
public:
    
    const long long MOD = 1e9 + 7 ; 
    

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size() ; 

        vector<int> prefix(n+1 , 0) ; 
        vector<int> sum(n+1 , 0) ;  
        vector<int> ln(n+1 , 0) ; 
        vector<long long>pow10(n+1 ,1) ; 
        for(int i = 1 ; i<=n ; i++){
            pow10[i] = (pow10[i-1] * 10) %MOD ; 
        }
        prefix[0] = 0 ; 
        sum[0] = 0 ; 
        
        for(int i = 0 ; i<n ; i++){
           int d = s[i] - '0' ; 
           sum[i+1] = sum[i] + d ; 
           prefix[i+1] = d ? (prefix[i] * 10LL + d) %MOD : prefix[i] ; 
           ln[i+1] = ln[i] + (d > 0) ; // IF d is non -zero add 1 
            
        }
       

        vector<int>ans ; 

        for(auto val : queries){
            int l = val[0] ; 
            int r = val[1] + 1 ; 

            long long digitSum = (sum[r] - sum[l])%MOD ; 
            int cnt = ln[r] - ln[l] ; 
            
            long long number = (prefix[r] - (prefix[l] * pow10[cnt])%MOD + MOD)%MOD ; 

            ans.push_back((number * digitSum)%MOD) ; 

        }

        
        return ans ;
        
    }
};
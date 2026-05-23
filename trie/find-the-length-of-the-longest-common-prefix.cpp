class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int m = arr1.size() ; 
        int n = arr2.size() ; 


        set<string>s ; 

        for(int i = 0 ; i<m ; i++){

            string s1 = to_string(arr1[i]) ; 
            string temp =  "" ; 
            for(char ch : s1){
                temp += ch ; 

                s.insert(temp) ; 
            }
        }

        int len = 0; 
        int mx  = 0 ;

        for(int i = 0 ; i<n ; i++){
            len = 0 ;
            string val = to_string(arr2[i]) ; 

            // "1000"  

            int j = 0 ;
            string str = "" ;
            while(j < val.size()){
               
                str += val[j] ; 
                if(s.find(str) != s.end()){
                    len++ ;  
                }
                else{
                    break ;
                }
                j++ ;
            }
            mx = max(len , mx) ; 
        }
        return mx ; 
    }
};
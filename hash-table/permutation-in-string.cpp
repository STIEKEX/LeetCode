class Solution {
public:
        // bool count(vector<int>a , vector<int>b){

        //     for(int i = 0 ; i<26 ; i++){
        //         if(a[i] != b[i]){
        //             return false; 
        //         }
        //     }
        //     return true ;
        // }
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size() > s2.size()) return false ;
        vector<int>freq1(26 , 0) ;

        for(char ch : s1){
            freq1[ch - 'a']++ ;
        }

        vector<int>freq2(26 , 0) ;



        int k = s1.size() ;
        int i = 0 ; 
        int j = 0 ;

        while(j < s2.size()){

            freq2[s2[j] - 'a']++ ;

            if(j-i+1 == k){
                //count the freq of both vector 
                if(freq1 == freq2) return true ;
            }

            if(j-i+1 < k){
                j++ ;
            }
            else{
                freq2[s2[i] -'a']-- ;
                i++ ;
                j++ ;
            }
        } 
        return false ;

        

        
        



        
    }
};
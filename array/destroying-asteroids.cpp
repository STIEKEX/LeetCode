class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a) {
        // 3 5 9 19 21 : 
        sort(a.begin() , a.end()) ; 
        long long x = mass ; 
        for(int i = 0 ; i<a.size() ; i++){
            if(x < a[i]){
                return false ;
            }
            else{
                x += a[i] ; 
            }
        }
        return true ;
        
    }
};
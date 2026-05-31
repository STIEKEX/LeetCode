class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a) {
        // 3 5 9 19 21 : 
        sort(a.begin() , a.end()) ; 

        for(int i = 0 ; i<a.size() ; i++){
            if(mass < a[i]){
                return false ;
            }
            else{
                mass += a[i] ; 
            }
        }
        return true ;
        
    }
};
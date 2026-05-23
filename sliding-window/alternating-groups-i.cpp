class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size() ;
        // colors.insert(colors.end() , colors.begin() , colors.end()) ;


        
      
        int count = 0 ;

        for(int left = 0 ; left < n  ; left++){

            if(colors[left] != colors[(left+1) % n] && colors[(left+1) % n] != colors[(left+2)%n]){
                count++ ;
            }
              

        }
        return count ;
    
        
    }
};
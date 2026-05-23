class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0)return true ;
        int size = flowerbed.size() ;

        if(size == 1 && flowerbed[0] == 0 && n == 1){
            return true ;
        }

        int i = 0 ; 
        while(i<size){
            if(n == 0){
                break ;
            }
            
            if(flowerbed[i] == 0){
                if( i == 0){
                    if(flowerbed[i+1] == 0){
                        flowerbed[i] = 1 ; 
                        n-- ;
                    }
                }
                else if(i == size-1){
                    if(flowerbed[i-1] == 0){
                        flowerbed[i] == 1 ;
                        n-- ;
                    }
                }
                else if(flowerbed[i+1] == 0 && flowerbed[i-1] == 0){
                    flowerbed[i] = 1 ;
                    n--;
                }
            }
            i++ ;
        }
        if(n == 0){
            return true ;
        }
        return false ;



    }
};
class Solution {
public:
    int maxArea(vector<int>& arr) {
        
        int st = 0 , end = arr.size() -1 ;

        int maxwater = 0 ; 
        while(st<end){
            int l  = min(arr[st], arr[end]) ; 
            int w = end - st ; 
            int area = l*w ; 
            maxwater = max(maxwater , area) ;
            if(arr[st]<arr[end]){
                st++ ;
            }else{
                end-- ;
            }
        }
        return maxwater ;

        
    }
};
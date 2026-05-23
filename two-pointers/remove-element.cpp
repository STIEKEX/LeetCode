class Solution {
public:
    int removeElement(vector<int>& arr, int val) {

        int n = arr.size() ; 
        int i = 0 , j = n - 1 ; 
        while(i < j ){
            if(arr[i] == val && arr[j] != val){
                swap(arr[i], arr[j]); 
                i++ , j-- ;
            }
            else if (arr[j] == val){
                j-- ;
            }else{
                i++  ;
            }
        }

       for(int i= 0 ; i<n ; i++){
        if(arr[i] == val){
            arr.pop_back() ;
        }
       }
       return  arr.size() ;
        
    }
};
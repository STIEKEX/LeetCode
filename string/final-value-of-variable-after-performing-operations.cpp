class Solution {
public:
    int finalValueAfterOperations(vector<string>& arr) {

        int n = arr.size( ) ; 
        int x= 0 ; 

        for(int i = 0 ; i <n ; i++){
            if(arr[i] == "++X" || arr[i] == "X++"){
                x++ ;
            }else{
                x-- ;
            }
        }
        return x ;
        
    }
};
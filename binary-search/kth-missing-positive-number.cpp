class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    //       unordered_map<int,int> m ;
    //   for(int i=0 ;i<arr.size() ; i++){
    //     m[arr[i]] = i ; 
    //   }
        int n= arr.size() ; 
        int i = 1;
        int j=0 ;
        while(k!=0 && j<n){
            if(i == arr[j]){
                i++,j++ ;
            }
            else{
                k--,i++ ;
            }
        }
         
        while(k!=0){
            i++,k-- ;
        }
        return i-1 ;
      
       
      

    }
        
    
};
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        
        int st = 0 , end = arr.size()-1  ; 

        while(st<end){
            int sum = arr[st] + arr[end] ;
            if(sum == target){
                return {st+1,end+1} ;
            }
            else if (sum > target){
                end-- ;
            }else{
                st++ ;
            }
        }
        return {} ;
    }
};
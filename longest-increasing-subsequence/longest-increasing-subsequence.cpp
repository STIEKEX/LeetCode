class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        vector<int>arr ; 

        for(int val : nums){

            if(arr.empty() || val > arr.back()){
                arr.push_back(val) ; 
            }
            else{
                int st = 0 ;
                int end = arr.size()-1 ; 
                int ans = arr.size()-1 ; 

                while(st <= end){

                    int mid = st + (end -st)/2 ; 

                    if(arr[mid] >= val){
                        ans = mid ; 
                        end = mid-1 ; 
                    }
                    else{
                      st = mid+1; 
                    }
                }
                arr[ans] = val ;
            }
        }
        return arr.size() ; 
        
    }
};
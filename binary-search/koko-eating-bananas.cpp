class Solution {
public:
    bool check(int k , int h , vector<int>&piles){
        long long  time = 0 ; 
        for(int val : piles){
            time += (val + k -1)/k ; 

        }
        return time <= h ; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int st = 1 ; 
        int end = *max_element(piles.begin() , piles.end()) ; 

        int ans = end ;
        while(st <= end){
            int mid = st + (end -st)/2 ; 

            if(check(mid, h , piles)){
                ans = mid ; 
                end = mid-1 ; 
            }
            else{
                st = mid+1 ;
                
            }
        }
        return ans ;
        
    }
};
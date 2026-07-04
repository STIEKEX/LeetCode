class Solution {
public:
    bool ship(int days , vector<int>&w , int cap){
        
        int d = 0 ; 
        int temp = 0 ; 

        for(int val : w){
            if(temp + val > cap){
                temp = 0 ; 
                d++ ; 
            }
            temp += val ; 
        }
        return d <= days ;6
        
    }
    int shipWithinDays(vector<int>& w, int days) {

       int n = w.size() ; 
       
       int sm = 0 ;
       int mx = INT_MIN ;
       for(int val : w){
        sm += val; 
        mx = max(mx , val) ;
       }

       int st = mx ;
       int end = sm ; 

       int ans = INT_MAX ; 

       while(st <= end){
        int mid = st + (end -st)/2 ; 

        if(ship(days , w , mid)){
            ans = min(ans , mid) ; 
            end = mid-1 ; 
        }
        else{
            st = mid+1 ; 
        }
       }
       return ans ; 
        
    }
};
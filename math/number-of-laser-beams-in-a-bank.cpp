class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m = bank.size() ; 
        int n = bank[0].size() ; 

        vector<int>laser ; 
        
        for(int i=0 ; i<m ; i++){
            int count = 0 ;
            for(int j=0; j<n ; j++){
                if(bank[i][j] == '1'){
                    count++ ;
                }
            }
            if(count !=0){
            laser.push_back(count);
            }
        }
        int ans = 0 ; 
        if(laser.size() <=1){
            return 0  ;
        }
        for(int i = 0 ; i<laser.size()-1 ; i++){
            ans += laser[i]  * laser[i+1];
        }
        return ans ;
        
    }
};
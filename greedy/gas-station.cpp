class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int g = 0 ; 
        int c = 0 ; 
        for(int val : gas){
            g+= val ;
        }
        for(int val : cost){
            c += val ;
        }
        if(g < c) return -1 ;

        int ans = 0 ; 
        int co = 0 ; 
        for(int i = 0 ; i<gas.size() ; i++){
            co += gas[i] - cost[i] ; 

            if(co < 0){
                ans = i+1 ; 
                co = 0 ; 
            }
        }
        return ans ;
        
    }
};
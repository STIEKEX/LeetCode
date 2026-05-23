class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        int time = 0 ;
        int i = 0 ;
        while(tickets[k] != 0){
            if(i == tickets.size()){
                i = 0 ;
            }
            if(tickets[i] != 0){
            tickets[i]-- ;
            time++ ;
            }
            i++ ;
        }
        return time ;
        
    }
};
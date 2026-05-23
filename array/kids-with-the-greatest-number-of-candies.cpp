class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {

        vector<bool> ans ; 
        int largest =   0 ;
        for(int i=0 ; i<candies.size() ; i++){
                if(largest < candies[i] ){
                    largest = candies[i]; 
                }
        }

        for(int i=0 ; i<candies.size() ; i++){
            int total = extra + candies[i] ;
            if(total >= largest){
                ans.push_back(true) ;
            }else{
                ans.push_back(false) ;
            }
        }

        return ans ;

        
    }
};
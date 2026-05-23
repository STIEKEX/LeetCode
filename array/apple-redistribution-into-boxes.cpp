class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int count = 0 ; 

        sort(capacity.begin() , capacity.end(), greater<int>()) ;

        int totalSum = 0 ;

        for(int i = 0 ; i<apple.size() ; i++){
            totalSum += apple[i] ;
        }

        int sum = 0 ;
        for(int i = 0 ; i<capacity.size() ; i++){
            if(sum < totalSum){
                sum += capacity[i] ;
                count++ ;
            }
        }
        return count ;




        
    }
};
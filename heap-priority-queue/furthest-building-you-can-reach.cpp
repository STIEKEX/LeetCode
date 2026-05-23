class Solution {
public:
    int furthestBuilding(vector<int>& nums, int bricks, int ladders) {
        int n = nums.size() ;
        priority_queue<int>q ;

        for(int i = 0 ; i<nums.size() - 1; i++){

            int diff = nums[i+1] - nums[i];
            if(diff > 0){
                q.push(diff) ;
                bricks -= diff ;

               
            }
             if(bricks < 0){
                    if(ladders  == 0){
                        return i ;
                    }
                    bricks += q.top() ; 
                    q.pop() ;

                    ladders-- ;
                }
            
            


        }
        return n-1 ;
        



        //logic behind this is that 
        // “Use bricks greedily, but if bricks fail, undo the biggest jump and use a ladder there.”
    }
};
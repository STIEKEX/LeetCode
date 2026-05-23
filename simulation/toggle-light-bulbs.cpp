class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {

        unordered_map<int , bool>m ; 

        for(int val : bulbs){
            if(m.find(val) != m.end()){
               if(m[val]){
                   m[val] = false; 
               }
                else{
                    m[val] = true ;
                }
            }
            else{
                m[val] = true ;
            }
            
           
        }
        vector<int>ans ;

        for(auto val : m){

            if(val.second  ){
                ans.push_back(val.first) ;
            }
        }
        sort(ans.begin() , ans.end()) ;

        
        return ans ;
        


        
        
    }
};
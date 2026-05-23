class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size() -1 ; 

        stack<pair<int , int>>s ; 


        int i = n ; 

        vector<int>ans ;
        while(i >= 0){
            int val = temperatures[i] ;
           
            if(!s.empty() && s.top().first > val){
                int diff = s.top().second - i ;
                ans.push_back(diff) ;
            }
            else {
                while(!s.empty() && s.top().first <= val){
                    s.pop() ;
                    
                }
                if(s.empty()){
                    ans.push_back(0) ;
                }
                else if(!s.empty() && s.top().first > val){
                    int diff = s.top().second -i ; 

                    ans.push_back(diff) ;
                }
            }
            s.push({val , i}) ;
            i-- ;

           
        }
        reverse(ans.begin()  , ans.end()) ;
        return ans ;
        
    }
};
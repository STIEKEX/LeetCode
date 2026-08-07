class Solution {
public:
    static bool cmp(const vector<int>&a , const vector<int>&b){
        if(a[0] == b[0]){
            return a[1] > b[1] ; 


        }
        return a[0] < b[0] ; 
    }
    int maxEnvelopes(vector<vector<int>>& en) {
        sort(en.begin() , en.end() , cmp) ; 

        vector<int>temp  ;

        for(auto val : en){
            int h = val[1] ; 

            auto it = lower_bound(temp.begin() , temp.end() , h) ; 

            if(it == temp.end()){
                temp.push_back(h) ; 
            }
            else{
                *it = h ; 
            }
        }
        return temp.size() ; 
        
    }
};
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_map<int ,int>m , m1 ; 
        for(int val : arr1){
            m[val]++ ;
        }
        for(int val : arr2){
            m1[val]++ ;
        }
         vector<int>temp ; 
        
        for(int val : arr1){
            if(m1.find(val) == m1.end()){
                temp.push_back(val) ;
            }
        }
        vector<int>ans ;
       
        for(int val : arr2){
            if(m.find(val) != m.end()){
                int freq = m[val] ; 
                
                while(freq--){
                    ans.push_back(val) ; 
                }
            }
            else{
                temp.push_back(val) ;
            }
            
        }
        sort(temp.begin() , temp.end()) ; 
        
        for(int val : temp){
            ans.push_back(val) ;
        }
        return ans ;
    }
};
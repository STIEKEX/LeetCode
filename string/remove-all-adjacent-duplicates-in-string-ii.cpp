class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char , int>>st ; 
        
        
        for(char ch : s){
            
            if(st.size() > 0 && st.top().first == ch){
                st.top().second++ ;
            }else{
                st.push({ch,1}) ;
            }
            if(st.top().second == k){
                st.pop() ; 
            }
        }
        
        string ans = "" ; 
        
        while(!st.empty()){
            int size = st.top().second ; 
            
            while(size--){
                ans += st.top().first ;
                
                
            }
            st.pop() ; 
        }
        reverse(ans.begin() , ans.end()) ; 
        return ans; 
        
        
    }
};
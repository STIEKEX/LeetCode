class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int ,int> m ;

        for (int val : nums){
            m[val]++ ;
        }
        vector<int>freq ; 
        for(auto val : m){
            freq.push_back(val.second) ;
        }
        sort(freq.begin() , freq.end() , greater<int>()) ;

        int sum = 0 ;
        int f  = 0 ;

        for(int i=0 ; i<freq.size() ; i++){
            if(f <= freq[i]){
                sum += freq[i];
                f = freq[i] ;
            }
            
        }
        return sum ;
        
        
    }
};
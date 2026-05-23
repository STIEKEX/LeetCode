class Solution {
public:
    int closestTarget(vector<string>& words, string target, int start) {
        int n = words.size()  ;
        int mn = INT_MAX ; 

        int i = (start + 1)%n ; 
        if(words[start] == target) return 0 ; 
        int count = 1 ; 
        while(i != start){
            if(words[i] == target){
                mn = min(mn ,  count) ; 
            }
            i = (i+1)%n ; 
            count++ ;
        }

        int j = (start -1 + n) % n  ; 
        count = 1;
        while(j != start){
            if(words[j] == target){
                mn = min(mn ,count ) ; 
            }
            j = (j - 1 + n)%n ; 
            count++ ;
        }
        if(mn == INT_MAX) return -1 ; 
        return mn ;
        
    }
};
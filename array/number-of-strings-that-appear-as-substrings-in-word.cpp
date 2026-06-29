class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {


        int cnt = 0 ; 

        for(string val : patterns){

            if(word.find(val) != string::npos){
                cnt++ ; 
            }
        }
        return cnt ; 
    }
};
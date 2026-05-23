class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int>ans ;
         int n = events.size() ; 
        int score = 0, counter = 0 ; 

        for(string ch : events){
            if(counter == 10) break ;
            if(ch == "0" || ch == "1" || ch == "2" || ch == "3" || ch == "4" || ch == "6"){
                score += stoi(ch) ; 
            }

            else if(ch == "W"){
                counter++ ;
            }
            else if(ch == "WD"){
                score++ ;
            }else{
                score++ ; 
            }
        }
        ans.push_back(score) ; 
        ans.push_back(counter) ; 
        return ans ;
    }
};
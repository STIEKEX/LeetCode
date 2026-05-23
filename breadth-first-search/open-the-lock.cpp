class Solution {
public:
    int openLock(vector<string>& deadends, string target) {

       unordered_set<string>s(deadends.begin() , deadends.end()) ;
       unordered_set<string>seen ;
        // if starting point is in deadend it is impossible to find the target : 
        if(s.count("0000")) return -1 ; 

        queue<string>q ;

        q.push("0000") ; 
        seen.insert("0000") ; 

        int steps = 0 ;
        while(q.size()  > 0){
            int size = q.size() ;
            
            while(size--){
                //using this while loop for all those state which take same step : 

                string curr = q.front() ; 
                q.pop() ; 

                // checking is dead or not  :
                if(s.count(curr)) continue ;

                if(curr == target) return steps ;

                for(int i =0 ; i<4 ; i++){
                    //pushing all possible states to the queue : 
                    string up = curr ; 
                    string down = curr; 

                    up[i] = (curr[i] == '9')?'0' : curr[i]+1 ;
                    down[i] =  (curr[i] == '0') ? '9' : curr[i] - 1 ;

                    if(!seen.count(up)){
                        q.push(up) ; 
                        seen.insert(up) ;
                    }
                    if(!seen.count(down)){
                        q.push(down) ;
                        seen.insert(down) ;
                    }
                }
                
            }
            steps++ ;
        }
        return -1 ;


        
    }
};
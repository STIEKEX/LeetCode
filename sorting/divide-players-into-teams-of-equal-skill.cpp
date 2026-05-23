class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        sort(skill.begin() , skill.end()) ; 

        int i = 0 , j = skill.size()-1 ; 

        int sum = skill[i] + skill[j] ;
        long long product = skill[i] * skill[j] ;
        j-- ;
        i++ ;
        while(i < j ){
            if(sum == skill[i] + skill[j]){
                product += skill[i] * skill[j] ;
                i++ , j-- ;
            }
            else{
                return -1 ;
            }


        }
        return product ;
    }
};
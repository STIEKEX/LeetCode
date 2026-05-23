class Solution {
public:
    bool stoneGame(vector<int>& piles) {
    int n=piles.size();
     for(int i = 0; i < n-1; i++) 
    {
        bool swapped = false;

        for(int j = 0; j < n-i-1; j++) 
        {
         if(piles[j] > piles[j+1])
         {
             swap(piles[j], piles[j+1]);
               swapped = true;
         }
        }
    if(!swapped)
    break;

    }
    int sum1=0,sum2=0;
  
 
    for(int i = 0; i < n; i++)
    {

     if(i%2==0) sum1+=piles[i];

     else sum2+=piles[i];

    }

    if(sum1>sum2) return false;
    else return true;
    }
};
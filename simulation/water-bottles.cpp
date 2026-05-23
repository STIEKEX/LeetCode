class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = 0 ;
        total += numBottles ;
      while(numBottles >= numExchange){
        int q = numBottles / numExchange ;
        int rem =  numBottles % numExchange ;
        total+= q ;
        numBottles = rem + q ;
      }
      return total ;
        
    }
};
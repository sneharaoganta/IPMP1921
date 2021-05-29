//https://leetcode.com/problems/water-bottles/
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
          int ans= numBottles + (numBottles) / (numExchange - 1);
        if((numBottles) %(numExchange - 1)==0)
            ans--;
        return ans;
    }
};
//https://leetcode.com/problems/can-place-flowers/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         for(int i=0;i<flowerbed.size();i++) {
            if(n==0) {return true;}
            if(flowerbed.at(i)==0) {
                int pre=(i==0?0:flowerbed.at(i-1)); // consider the special case of the beginning
                int next=(i==flowerbed.size()-1?0:flowerbed.at(i+1)); // consider the special case of the end
                if(pre==0 && next==0) {
                    flowerbed.at(i)=1;
                    n--;
                }
            }
        }
        return n<=0;
    
    }
};
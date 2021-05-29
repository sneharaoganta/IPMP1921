//https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())
         return findMedianSortedArrays(nums2,nums1);
      int x = nums1.size();
      int y = nums2.size();
      int low = 0;
      int high = x;
      int totalLength = x+y;
      while(low<=high){
         int partitionX = low + (high - low)/2;
         int partitionY = (totalLength + 1)/2 - partitionX;
         int maxLeftX = (partitionX ==0?INT_MIN:nums1[partitionX-1] );
         int minRightX = (partitionX == x?INT_MAX :
         nums1[partitionX]);
         int maxLeftY = (partitionY ==0?INT_MIN:nums2[partitionY-1] );
         int minRightY = (partitionY == y?INT_MAX : nums2[partitionY]);
         if(maxLeftX<=minRightY && maxLeftY <= minRightX){
            if(totalLength% 2 == 0){
               return ((double)max(maxLeftX,maxLeftY) + (double)min(minRightX,minRightY))/2;
            } else {
               return max(maxLeftX, maxLeftY);
            }
         }
         else if(maxLeftX>minRightY)
            high = partitionX-1;
         else low = partitionX+1;
      }
      return 0;
    }
};
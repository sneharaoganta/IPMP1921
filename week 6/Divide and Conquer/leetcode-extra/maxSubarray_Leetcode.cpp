//https://leetcode.com/problems/maximum-subarray/submissions/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=INT_MIN;
        int sum=0;
        for (int i=0;i<nums.size();i++){
            sum = sum>=0?(sum+nums[i]):nums[i];
            m=max(sum,m);
        }
        return m;
    }
};
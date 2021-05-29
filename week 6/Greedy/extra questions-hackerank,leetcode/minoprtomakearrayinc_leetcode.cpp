//https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count =0;
        int n=nums.size();
        int q;
        
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                q=(nums[i-1]-nums[i])+1;
                
                count+=q;
                nums[i]+=q;
            }
        }
        
        return count;
        
    }
};
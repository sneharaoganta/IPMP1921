//https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
        int maj = n/2;
       int count;
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<n;j++){
                if(nums[j]==nums[i]){
                        count++;
                    }
            }
            if(count>maj){
                return nums[i];
            }
        }
        
        return -1;
    }
};
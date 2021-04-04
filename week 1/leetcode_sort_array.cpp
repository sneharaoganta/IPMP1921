// Leet code: https://leetcode.com/problems/sort-an-array/
// Bubble sort: (this question using bubble sort didnt satisfy all test cases due to execution time constraint)


class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int i,j;
        for(i=0;i<nums.size()-1;i++){
            for(j=0;j<nums.size()-i-1;j++)
                if(nums[j]>nums[j+1])
                    swap(&nums[j],&nums[j+1]);
            
        }
        
        return nums;
        
    }
    
    void swap(int *xp,int *yp){
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
};



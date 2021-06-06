class Solution {
public:
    
    int ans=0;
    void backtrack(vector<int>& nums, const int& n,int sum,int index){
        ans+=sum;
        for(int i=index;i<n;i++){
        sum^=nums[i];
        backtrack(nums,n,sum,i+1);
        sum^=nums[i];
    }
}
    
    int subsetXORSum(vector<int>& nums) {
        backtrack(nums,nums.size(),0,0);
        return ans;
    }
};
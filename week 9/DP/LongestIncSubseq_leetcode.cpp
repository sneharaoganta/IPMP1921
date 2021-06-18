class Solution {
public:
    
    int ceilIndex(int tail[], int l, int r, int x){

    while(r>l){
        int m= l+(r-l)/2;
        
        if(tail[m]>=x)
            r=m;
        else
            l=m+1;
        
    }
    return r;
}
    
    int lengthOfLIS(vector<int>& nums) {
         int n = nums.size();
    
    
    if(n==0)
        return 0;
    
    int tail[n], len=1;
    tail[0]=nums[0];
    
    for(int i=1;i<n;i++){
        if(nums[i]>tail[len-1])
        {
            tail[len]=nums[i];
            len++;
        }
        
        else
        {
            int c = ceilIndex(tail, 0, len-1, nums[i]);
            tail[c]=nums[i];
        }
    }
    return len;
    }
};
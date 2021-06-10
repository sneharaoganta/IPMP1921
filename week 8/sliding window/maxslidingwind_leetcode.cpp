class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       int i,n=nums.size();
        deque<int> dq(k);
        vector<int> v;
        for(i=0;i<k;i++){
            while(dq.size() && nums[i]>=nums[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        for(;i<n;i++){
            v.push_back(nums[dq.front()]);
            while(dq.size() && dq.front()<=i-k) dq.pop_front();
            while(dq.size() && nums[i]>=nums[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        v.push_back(nums[dq.front()]);
        return v;
    }
    
};
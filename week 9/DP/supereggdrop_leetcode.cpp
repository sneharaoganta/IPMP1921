class Solution {
public:
    
    int attempts(int eggs, int floors, int dp[][10005]) {
        if (floors == 0 or floors == 1) {
            return dp[eggs][floors] = floors;
        }
        if (eggs == 0) {
            return dp[eggs][floors] = 0;
        }
        if (eggs == 1) {
            return dp[eggs][floors] = floors;
        }
        if (dp[eggs][floors] != -1) {
            return dp[eggs][floors];
        }
        int ans = INT_MAX, left, right;
        int low = 1, high = floors;
        while(low <= high) {
            int mid = (high + low)/2;
            // if the egg breaks at floor = mid
            if (dp[eggs-1][mid-1] != -1) {
                left = dp[eggs-1][mid-1];
            }
            else {
                left = attempts(eggs-1, mid-1, dp);
            }
            
            // if egg doesn't break at floor = mid
            if (dp[eggs][floors-mid] != -1) {
                right = dp[eggs][floors-mid]; 
            }
            else {
                right = attempts(eggs, floors-mid, dp);
            }
            
            ans = min(ans, (1 + max(left, right)));
            if (left < right) {
                low = mid+1;     
            }
            else {
                high = mid-1;
            }
        }
        dp[eggs][floors] = ans;
        return dp[eggs][floors];
    }
    
    int superEggDrop(int k, int n) {
         int dp[105][10005];
        memset(dp, -1, sizeof(dp));
       return attempts(k, n, dp);
    }
};
class Solution {
public:
    
    int recur(vector <int>& a, int n, int m, vector < vector<int> >& dp) {
        if (n + 1 == m) return 0;
        if (m - n == 2) return dp[n][m] = a[n]*a[n+1]*a[n+2];
        if (dp[n][m] != -1) return dp[n][m];
        int val = 0;
        for (int k = n + 1; k <= m - 1; k++) {
            val = max(val, recur(a, n, k, dp) + recur(a, k, m, dp) + a[n]*a[k]*a[m]);
            
        }
        
        return dp[n][m] = val;
    }
    
    int maxCoins(vector<int>& nums) {
        vector <int> a = {1};
        a.insert(a.end(), nums.begin(), nums.end());
        a.push_back(1);
        vector < vector <int> > dp(a.size() + 1, vector <int> (a.size() + 1, -1));
        return recur(a, 0, a.size() - 1, dp); 
    }
};
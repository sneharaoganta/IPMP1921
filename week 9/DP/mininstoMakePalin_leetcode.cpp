class Solution {
public:
    int minInsertions(string s) {
      int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        //nature= subarray
        for(int i=0;i<n;i++)
        {
            if(i!=n-1 && s[i]!=s[i+1])
                dp[i][i+1]=1;
        }
        for(int i=n-3;i>=0;i--)
        {
            for(int j=i+2;j<n;j++)
            {
                if(s[i]==s[j])
                    dp[i][j]=dp[i+1][j-1];
                else
                    dp[i][j]=1+min(dp[i+1][j],dp[i][j-1]);
            }
        }
        return dp[0][n-1];   
    }
};
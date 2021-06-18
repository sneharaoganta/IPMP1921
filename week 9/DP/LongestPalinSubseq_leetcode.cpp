class Solution {
public:
    int longestPalindromeSubseq(string s) {
         int n=s.length();
        int ans=1;
        int j;
        
        int dp[n][n];
        
        for(int i=0; i < n; i++){
            for(int j =0; j < n; j++){
                dp[i][j] = 0;
            }
        }
        
        for (int i=0;i<n;i++)
        {
            dp[i][i] =1;
            if(i!=n-1 and s[i]==s[i+1])
            {    
                 dp[i][i+1]=2; ans=2;
            }
            if(i!=n-1 and s[i]!=s[i+1])
            {    
                 dp[i][i+1]=1; 
            }
        }
        
        
        for (int k=2;k<n;k++)
        {
            for(int i=0;i<n-k;i++)
            {   
                j=i+k;
                if(s[i]==s[j])
                {
                    dp[i][j]=dp[i+1][j-1]+2; 
                    ans=max(ans,dp[i][j]);
                }
                else
                     dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
                
            }
        }
        
        return ans;
    }
};
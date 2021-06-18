class Solution {
public:
    string longestPalindrome(string s) {
        /*
    nature- subarray
    dp[i][j]=dp[i+1][j-1].....if s[i]==s[j]
    dp[i][j]=false......otherwise
    along with 1 length string we also have to fill 2 length string as base case, because it will point to beyond the diagonal.
    */
        int n=s.size();
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=true;
            if(i!=n-1 && s[i]==s[i+1] )
                dp[i][i+1]=true;
        }
       
        for(int i=n-3;i>=0;i--)
        {
            for(int j=i+2;j<n;j++)
            {
                if(s[i]==s[j])
                    dp[i][j]=dp[i+1][j-1];
                
          
             }
        }
         
        int len=1;
        int start=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dp[i][j]==true && len<j-i+1)
                {
                    len=max(len,j-i+1);
                    start=i;
                }
            }
        }
        return s.substr(start,len);
        
        
    }
};
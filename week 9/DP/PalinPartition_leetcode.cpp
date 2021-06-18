class Solution {
public:
    
    vector<vector<string>>res;

bool isPalindrome(int start,int end, string&s,vector<vector<int>>&dp)
{   
    if(dp[start][end]!=-1)
    {
        return dp[start][end];
    }
    int l=start,r=end;
    while(l<r)
    {
        if(s[l++]!=s[r--])
        {
            return dp[start][end]=0;
        }
    }
    return dp[start][end]=1;
}

void dfs(int start,string &s,vector<string>&curr,vector<vector<int>>&dp)
{   
    if(start>=s.length())
    {
        res.push_back(curr);
        return;
    }
    for(int i=start;i<s.length();i++)
    {
        if(isPalindrome(start,i,s,dp))
        {
            curr.push_back(s.substr(start,i-start+1));
            dfs(i+1,s,curr,dp);
            curr.pop_back();
        }
    }
}

    
    vector<vector<string>> partition(string s) {
        vector<string>currList;
    vector<vector<int>>dp(s.length(),vector<int>(s.length(),-1));
    dfs(0,s,currList,dp);
    return res;
    }
};
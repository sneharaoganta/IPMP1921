class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int m = s1.size();
        int n = s2.size();
        
		//size of interleaved string should be equal to the sum of size of two strings
        if(m + n != s3.size())
            return false;
        
        bool t[m + 1][n + 1];
        memset(t, 0, sizeof(t));
        
        for(int i = 0; i <= m; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                if(i == 0 && j == 0)    //if both strings are empty then an empty string is interleave of them
                    t[i][j] = true;
                else if(i == 0)         //s1 is empty
                {
                    if(s2[j - 1] == s3[j - 1])
                        t[i][j] = t[i][j - 1];
                }
                else if(j == 0)         //s2 is empty
                {
                    if(s1[i - 1] == s3[i - 1])
                        t[i][j] = t[i - 1][j];
                }
				
                else if(s1[i - 1] == s3[i + j - 1] && s2[j - 1] != s3[i + j - 1])   //current character of str3 matches with current character of str1 
				                                                                    //but doesn't match with current character of str2
                    t[i][j] = t[i - 1][j];
					
                else if(s1[i - 1] != s3[i + j - 1] && s2[j - 1] == s3[i + j - 1])   //current character of str3 matches with current character of str2 
				                                                                    //but doesn't match with current character of str1
                    t[i][j] = t[i][j - 1];
					
                else if(s1[i - 1] == s3[i + j - 1] && s2[j - 1] == s3[i + j - 1])  //current character of str3 matches with 
				                                                                   //both current character of str1 and str2
                    t[i][j] = t[i - 1][j] || t[i][j - 1];
            }
        }
        
        return t[m][n];
        
        
    }
};
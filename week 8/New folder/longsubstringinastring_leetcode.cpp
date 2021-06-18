class Solution {
public:
    
    // string s = " abcabcab " ,length of longest substring wo repeating char is 3.
//Lets see how :
//i = 0 ; s[i] = a ; not in map so just update map (a -> 0)
//i = 1 ; s[i] = b ;not in map (a->0 , b->1)
//i= 2 ; s[i] = c; not in map(a->0,b->1,c->2)
//i = 3;s[i] = a; present in map so we need to count the length of our substring which is i - start
//and update start ;
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
		unordered_map<char,int>mp;
		
		if(s.length() == 0)
			return 0;
		int start = 0;
		int maxlen = 0;
		int i;
		for(i = 0;i<s.length();i++)
		{
			if(mp.find(s[i]) != mp.end())
			{
				maxlen = max(maxlen ,i - start);
				start = max(start,mp[s[i]]+1);
				mp[s[i]] = i;
			}
			else
			{
				mp[s[i]] = i;
			}
		}
		maxlen = max(maxlen,i-start);
		return maxlen;
    }
};
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHAR 256

// to find factorial of n
int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}
 
int findSmallerInRight(char* str, int low, int high)
{
    int countRight = 0, i;
 
    for (i = low + 1; i <= high; ++i)
        if (str[i] < str[low])
            ++countRight;
 
    return countRight;
}
 
int findRank(char* str)
{
    int len = strlen(str);
    int mul = fact(len);
    int rank = 1;
    int countRight;
 
    int i;
    for (i = 0; i < len; ++i) {
        mul /= len - i;
 
        countRight = findSmallerInRight(str, i, len - 1);
 
        rank += countRight * mul;
    }
 
    return rank;
}

void printRLE(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++) {

        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
 
        cout << str[i] << count;
    }
}

int ic_strcmp(string s1, string s2) 
{ 
    int i; 
    for (i = 0; s1[i] && s2[i]; ++i) 
    { 
        if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i]) 
        continue; 
        else
        break; 
    } 
  
    if (s1[i] == s2[i]) 
        return 0; 
  
    if ((s1[i] | 32) < (s2[i] | 32)) 
        return -1; 
    return 1; 
} 

int* getcountarray(string str2)
{
    int* count = (int*)calloc(sizeof(int), NO_OF_CHAR);
 
    for (int i = 0; i < str2.size(); i++)
    {
        count[str2[i]]++;
    }
 
    return count;
}
 

string removeDirtyChars(string str1, string str2)
{
    int* count = getcountarray(str2);
    string res;
      
    int ip_idx = 0;
 
    while (ip_idx < str1.size())
    {
        char temp = str1[ip_idx];
        if (count[temp] == 0)
        {
            res.push_back(temp);
        }
        ip_idx++;
    }
 
    return res;
}

bool areAnagram(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
  
    if (n1 != n2)
        return false;
  
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
  
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
  
    return true;
}
 
bool areDistinct(string str, int i, int j)
{
    vector<bool> visited(26);
 
    for (int k = i; k <= j; k++) {
        if (visited[str[k] - 'a'] == true)
            return false;
        visited[str[k] - 'a'] = true;
    }
    return true;
}
 
int longestUniqueSubsttr(string str)
{
    int n = str.size();
    int res = 0; 
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (areDistinct(str, i, j))
                res = max(res, j - i + 1);
    return res;
}
 


int main()
{
    char str[] = "string";
    cout << findRank(str);
    cout<<endl;
    
    string s = "wwwwaaadexxxxxxywww";
    printRLE(s);
    
    cout<<"ret: "<<ic_strcmp("Geeks", "apple") <<endl; 
    cout<<"ret: "<<ic_strcmp("", "ABCD")<<endl; 
    cout<<"ret: "<<ic_strcmp("ABCD", "z")<<endl; 
    cout<<"ret: "<<ic_strcmp("ABCD", "abcdEghe")<<endl; 
    cout<<"ret: "<<ic_strcmp("GeeksForGeeks", "gEEksFORGeEKs")<<endl; 
    cout<<"ret: "<<ic_strcmp("GeeksForGeeks", "geeksForGeeks")<<endl; 
    
    string str1 = "geeksforgeeks";
    string str2 = "mask";
 
    cout << removeDirtyChars(str1, str2) << endl;
    
    string s1 = "test";
    string s2 = "ttew";
  
    if (areAnagram(s1, s2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";
                
    string p = "geeksforgeeks";
    cout << "The input string is " << p << endl;
    int len = longestUniqueSubsttr(p);
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len;
    
    return 0;
}
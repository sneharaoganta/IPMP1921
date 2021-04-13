#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256
  
//print reverse of the passed string 
void reverse(string str) 
{ 
    if(str.size() == 0)
    {
        return;
    }
    reverse(str.substr(1));
    cout << str[0];
    
} 
//find all permutations of a string
void permute(string a, int l, int r)
{
    
    if (l == r)
        cout<<a<<endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
 
            swap(a[l], a[i]);
 
            permute(a, l+1, r);
 
            swap(a[l], a[i]);
        }
    }
}


int* getCharCountArray(char* str)
{
    int* count = (int*)calloc(sizeof(int), NO_OF_CHARS);
    int i;
    for (i = 0; *(str + i); i++)
        count[*(str + i)]++;
    return count;
}
 
int firstNonRepeating(char* str)
{
    int* count = getCharCountArray(str);
    int index = -1, i;
 
    for (i = 0; *(str + i); i++) {
        if (count[*(str + i)] == 1) {
            index = i;
            break;
        }
    }
 
    
    free(count);
    return index;
}
//reverse words
 void reverseWords(string s)
{
    vector<string> tmp;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            tmp.push_back(str);
            str = "";
        }
 
        else
            str += s[i];
    }
   
    tmp.push_back(str);
 
    int i;
    for (i = tmp.size() - 1; i > 0; i--)
        cout << tmp[i] << " ";
    
    cout << tmp[0] << endl;
}

//print duplicates
void printDups(string str)
{
    map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }
 
    for (auto it : count) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}

 
int main() 
{ 
    cout<<"printing reverse of passed string"<<"\n";
    string a = "Geeks for Geeks";
    reverse(a);
    
    cout<<"\nprint all permutations of a string"<<"\n";
    string str = "ABC";
    int n = str.size();
    permute(str, 0, n-1);
    
    
    cout<<"printing first non repeating character"<<"\n";
    char s[] = "geeksforgeeks";
    int index = firstNonRepeating(s);
    if (index == -1)
        cout<<"Either all characters are repeating or "
              "string is empty"<<"\n";
    else
        cout<<"First non-repeating character is "<<s[index]<<"\n";
               
    getchar();
    
    //new question: reverse words
    cout<<"Printing reverse of words\n";
    string q = "my name is saksi kumar";
    reverseWords(q);
    
    //new question: print dups
    cout<<"printing dups\n";
    string r = "given string";
    printDups(r);
    
    return 0; 
} 
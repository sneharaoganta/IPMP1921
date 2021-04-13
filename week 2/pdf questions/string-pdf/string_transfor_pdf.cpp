#include <bits/stdc++.h>
using namespace std;
 
// swap characters
void swap ( char* a, char* b )
{
    char t = *a;
    *a = *b;
    *b = t;
}
 
// reverse string str[low..high]
void reverse ( char* str, int low, int high )
{
    while ( low < high )
    {
        swap( &str[low], &str[high] );
        ++low;
        --high;
    }
}
 
void cycleLeader ( char* str, int shift, int len )
{
    int j;
    char item;
 
    for (int i = 1; i < len; i *= 3 )
    {
        j = i;
 
        item = str[j + shift];
        do
        {
            if ( j & 1 )
                j = len / 2 + j / 2;
            
            else
                j /= 2;
 
            swap (&str[j + shift], &item);
        }
        while ( j != i );
    }
}
 
void moveNumberToSecondHalf( char* str )
{
    int k, lenFirst;
 
    int lenRemaining = strlen( str );
    int shift = 0;
 
    while ( lenRemaining )
    {
        k = 0;
 
        while ( pow( 3, k ) + 1 <= lenRemaining )
            k++;
        lenFirst = pow( 3, k - 1 ) + 1;
        lenRemaining -= lenFirst;
 
        
        cycleLeader ( str, shift, lenFirst );
 
        reverse ( str, shift / 2, shift - 1 );
 
        reverse ( str, shift, shift + lenFirst / 2 - 1 );
 
        reverse ( str, shift / 2, shift + lenFirst / 2 - 1 );
 
        
        shift += lenFirst;
    }
}

void printRLE(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++) {
 
        // Count occurrences of current character
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
 
        // Print character and its count
        cout << str[i] << count;
    }
}
 

int main()
{
    char str[] = "a1b2c3d4e5f6g7";
    moveNumberToSecondHalf( str );
    cout<<str;

    


    return 0;
}
 
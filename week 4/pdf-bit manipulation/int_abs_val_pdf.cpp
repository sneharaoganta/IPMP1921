#include <bits/stdc++.h>
using namespace std;
#define CHARBIT 8
 
unsigned int getAbs(int n)
{
    int const mask = n >> (sizeof(int) * CHARBIT - 1);
    return ((n + mask) ^ mask);
}
 
int main()
{
    int n = -6;
    cout << "Absoute value of " << n << " is " << getAbs(n);
    return 0;
}
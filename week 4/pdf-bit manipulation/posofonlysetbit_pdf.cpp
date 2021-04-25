#include <bits/stdc++.h>
using namespace std;
 
unsigned int Log2n(unsigned int n)
{
    return (n > 1) ? 1 + Log2n(n / 2) : 0;
}
 
int isPowerOfTwo(unsigned n)
{
    return n && (!(n & (n - 1)));
}
 
int findPosition(unsigned n)
{
    if (!isPowerOfTwo(n))
        return -1;
    return Log2n(n) + 1;
}
 
int main(void)
{
    int n = 0;
    int pos = findPosition(n);
    (pos == -1) ? cout<<"n = "<<n<<", Invalid number\n" :
            cout<<"n = "<<n<<", Position "<<pos<<" \n";
 
    n = 12;
    pos = findPosition(n);
    (pos == -1) ? cout<<"n = "<<n<<", Invalid number\n" :
            cout<<"n = "<<n<<", Position "<<pos<<" \n";
 
    n = 128;
    pos = findPosition(n);
    (pos == -1) ? cout<<"n = "<<n<<", Invalid number\n" :
            cout<<"n = "<<n<<", Position "<<pos<<" \n";
 
    return 0;
}
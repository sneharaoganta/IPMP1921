#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n &= (n-1);
    }
    return count;
}

int FlippedCount(int a, int b)
{
    return countSetBits(a^b);
}
 
int main()
{
    int a = 10;
    int b = 20;
    cout << FlippedCount(a, b)<<endl;
    return 0;
}
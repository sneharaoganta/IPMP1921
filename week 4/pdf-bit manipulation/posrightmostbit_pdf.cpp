#include <iostream>
#include <math.h>
using namespace std;
 
class bit
{
 
public:
unsigned int getFirstSetBitPos(int n)
{
    return log2(n & -n) + 1;
}
};
 
int main()
{
    bit g;
    int n = 12;
    cout << g.getFirstSetBitPos(n);
    return 0;
}
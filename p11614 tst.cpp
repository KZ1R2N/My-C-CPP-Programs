
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long row, soldier, sum;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        cin >> soldier;
        sum = (sqrt(1 + 8 * soldier) - 1) / 2;
        printf("%lld\n", sum);
    }
    return 0;
}

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int L, R, X, value1 = 0, value2 = 0, value3 = 0;
    cin >> L >> R >> X;
    for (int i = 1; i <= L; i++)
    {

        if (L % i == 0)
        {
            value1++;
        }
    }
    for (int i = 1; i <= R; i++)
    {

        if (R % i == 0)
        {
            value2++;
        }
    }
    for (int i = 1; i <= X; i++)
    {

        if (X % i == 0)
        {
            value3++;
        }
    }
    cout << value1 << endl;
    cout << value2 << endl;
    cout << value3 << endl;

    cout << value1 + value2 + value3 << endl;
}
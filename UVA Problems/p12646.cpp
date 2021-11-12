#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C;
    while (cin >> A >> B >> C)
    {
        if (A == 0 && B == 0 && C == 0)
        {
            cout << "*" << endl;
        }
        else if (A == 1 && B == 1 && C == 1)
        {
            cout << "*" << endl;
        }

        else if (A == 0 && B == 0 && C == 1)
        {
            cout << "C" << endl;
        }
        else if (A == 1 && B == 1 && C == 0)
        {
            cout << "C" << endl;
        }

        else if (A == 1 && B == 0 && C == 1)
        {
            cout << "B" << endl;
        }
        else if (A == 0 && B == 1 && C == 0)
        {
            cout << "B" << endl;
        }

        else if (A == 0 && B == 1 && C == 1)
        {
            cout << "A" << endl;
        }
        else if (A == 1 && B == 0 && C == 0)
        {
            cout << "A" << endl;
        }
    }

    return 0;
}

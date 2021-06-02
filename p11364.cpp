#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Test_Case, Store_Number, min, max, temp;

    cin >> Test_Case;

    while (Test_Case--)
    {
        min = 5000;
        max = 0;
        cin >> Store_Number;

        for (int i = 0; i < Store_Number; ++i)
        {
            cin >> temp;
            if (temp < min)
                min = temp;
            if (temp > max)
                max = temp;
        }

        cout << (max - min) * 2 << endl;
    }

    return 0;
}

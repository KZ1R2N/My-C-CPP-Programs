#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cout << "How many time do you want to run the code: " << endl;
    cin >> test_case;

    // while (test_case--)
    for (int i = 1; i <= test_case; i++)
    {

        int ema, ratun;
        cout << "Enter the value of Ema: " << endl;

        cin >> ema;

        cout << "Enter the value of Ratun: " << endl;

        cin >> ratun;

        if (ema > ratun)
        {
            cout << "Ema is greater" << endl
                 << endl;
        }
        else
            cout << "Ratun is greater" << endl
                 << endl;
    }

    return 0;
}

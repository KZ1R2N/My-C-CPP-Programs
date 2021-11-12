#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    int red, blue, d;
    while (test_case--)
    {
        cin >> red >> blue >> d;

        if (red != blue)
        {
            long long max_bin, min_bin;

            max_bin = max(red, blue);
            min_bin = min(red, blue);

            while (min_bin--)
                max_bin -= (1 + d);

            if (max_bin > 0)
                cout << "NO" << endl;

            else
                cout << "YES" << endl;
        }

        else if (red == blue)
            cout << "YES" << endl;
    }

    return 0;
}
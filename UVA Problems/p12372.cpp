#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, height, width, lenth, t = 1;
    cin >> test_case;
    while (test_case--)
    {
        cin >> lenth >> width >> height;
        cout << "Case " << t << ": ";

        if (lenth <= 20 && width <= 20 && height <= 20)
        {
            cout << "good" << endl;
        }
        else
        {
            cout << "bad" << endl;
        }
        t++;
    }

    return 0;
}

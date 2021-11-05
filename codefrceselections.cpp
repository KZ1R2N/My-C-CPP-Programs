#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, a, b, c;
    cin >> test_case;
    while (test_case--)
    {
        cin >> a >> b >> c;
        int max_value = max({a, b, c});
        if (a == b && b == c)
            cout << 1 << " " << 1 << " " << 1 << endl;
        else if (a > b && a > c)
            cout << 0 << " " << max_value - b + 1 << " " << max_value - c + 1 << endl;
        else if (b > a && b > c)
            cout << max_value - a + 1 << " " << 0 << " " << max_value - c + 1 << endl;
        else if (c > a && c > b)
            cout << max_value - a + 1 << " " << max_value - b + 1 << " " << 0 << endl;
        else if (a == max_value && b == max_value)
            cout << 1 << " " << 1 << " " << max_value - c + 1 << endl;
        else if (a == max_value && c == max_value)
            cout << 1 << " " << max_value - b + 1 << " " << 1 << endl;
        else if (b == max_value && c == max_value)
            cout << max_value - a + 1 << " " << 1 << " " << 1 << endl;
    }
    return 0;
}

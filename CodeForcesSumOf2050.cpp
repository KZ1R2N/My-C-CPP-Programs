#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    long long value, count = 0;
    cin >> test_case;
    while (test_case--)
    {
        long long input;
        cin >> input;
        count = 0;
        while (input >= 2050)  
        {
            count++;
            value = 2050;
            while (value <= input)

            {
                value *= 10;
            }
            value = value / 10;

            input = input - value;
        }
        if (input != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}
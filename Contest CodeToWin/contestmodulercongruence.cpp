#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long test_case, i, number, count;
    unsigned long number2, moduler;

    cin >> test_case;
    while (test_case--)
    {
        i = moduler + 1;
        cin >> number >> number2 >> moduler;
        unsigned long tmpnumber = number - moduler;
        unsigned long value;
        // for (i = moduler + 1; i < 1000000000000; i++)
        while (1)
        {
            if (tmpnumber % i == 0)
            {
                value = tmpnumber / i;
            }
            i++;
        }
        if (number2 % value == moduler)
        {

            cout << value << endl;
            break;
        }
    }
    return 0;
}

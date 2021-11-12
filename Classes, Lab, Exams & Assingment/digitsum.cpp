#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, input1, input2, tmp1, value = 0, tmp2 = 0;
    while (true)
    {

        cout << "Enter Two Value: " << endl;
        cin >> input1 >> input2;
        if (input1 < input2)
        {
            for (i = input1; i <= input2; i++)
            {

                int value2 = 0;
                tmp2 = i;

                while (tmp2 != 0)
                {
                    tmp1 = tmp2 % 10;
                    value = value + tmp1;
                    value2 = value2 + tmp1;
                    tmp2 = tmp2 / 10;
                }
                cout << "Digit summation of " << i << " is: " << value2 << endl;
            }
            cout << "\nTotal Digit Sum: " << value << endl
                 << endl;
        }
        else
        {
            cout << "\nwrong value" << endl
                 << endl;
        }
    }

    return 0;
}

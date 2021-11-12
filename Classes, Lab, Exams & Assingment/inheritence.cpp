#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class number
{
    int n;
    unsigned long long fact = 1;

public:
    int Factorial()
    {
        cout << "Enter number to find factorial: ";
        cin >> n;

        if (n < 0)
            cout << "it's a negative number";
        else
        {
            for (int i = 1; i <= n; ++i)
            {
                fact *= i;
            }
            cout << "Factorial : " << fact << endl;
        }
    }
};
class lastdigit : public number
{
    int num, digit;

public:
    int last_digit()
    {

        cout << "Enter number to find last digit: ";
        cin >> num;
        digit = num % 10;
        cout << "Last Digit: " << digit << endl
             << endl;
    }
};
int main()
{
    while (true)
    {

        lastdigit object;
        object.Factorial();
        object.last_digit();
    }

    return 0;
}

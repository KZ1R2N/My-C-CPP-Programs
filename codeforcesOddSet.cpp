#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input, test_case, pair, even_number, odd_number;

    cin >> test_case;
    while (test_case--)
    {
        even_number = 0;
        odd_number = 0;
        cin >> pair;
        for (int i = 0; i < pair * 2; i++)
        {
            cin >> input;
            if (input % 2 == 0)
            {
                even_number++;
            }
            else
                odd_number++;
        }

        if (even_number == odd_number)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}

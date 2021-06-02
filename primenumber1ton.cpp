#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, value = 0, temp_number;
    cin >> number;
    for (temp_number = 1; temp_number <= number; temp_number++)
    {
        value = 0;
        for (int i = 1; i <= temp_number; i++) //number = 12
        {

            if (temp_number % i == 0)
            {
                value++;
            }
        }
        if (value == 2)
        {
            cout << temp_number << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int first_prime, second_prime;
    int newcount = 0, count = 0;
    int value = 0;
    cin >> first_prime >> second_prime;
    for (int i = first_prime + 1; i <= second_prime; i++)
    {
        first_prime++;

        int j = 0;
        int count = 0;
        for (j = 1; j <= first_prime; j++)
        {

            if (first_prime % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {

            value = first_prime;

            if (value == second_prime)
            {
                newcount = 1;
            }

            else
                newcount = 0;

            break;
        }
        else if (count > 2)
            newcount = 0;
    }
    if (newcount == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

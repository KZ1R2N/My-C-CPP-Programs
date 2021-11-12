#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int size;
        cin >> size;

        int count = 0;
        for (int i = 0; i < size; i++)
        {
            int input;
            cin >> input;

            if (input == 1 || input == 3)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}

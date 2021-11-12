#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int date, month, old_year, new_year, test_case, count = 0, Case = 1;
    cin >> test_case;
    while (test_case--)
    {
        count = 0;
        cin >> date >> month >> old_year >> new_year;
        if (month != 2)
            cout << "Case " << Case << ": " << new_year - old_year << endl;
        else if (date != 29)
            cout << "Case " << Case << ": " << new_year - old_year << endl;

        else
        {

            for (int i = old_year; i <= new_year; i += 4)
            {
                if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
                {
                    count++;
                }
            }
            cout << "Case " << Case << ": " << count - 1 << endl;
        }
        Case++;
    }

    return 0;
}

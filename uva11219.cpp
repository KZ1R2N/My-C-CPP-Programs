#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int current_date, current_month, current_year, birth_date, birth_month, birth_year, main_year;
    int test_cases, cases = 1;
    cin >> test_cases;
    while (test_cases--)
    {
        scanf("%d/%d/%d", &current_date, &current_month, &current_year);
        scanf("%d/%d/%d", &birth_date, &birth_month, &birth_year);
        main_year = current_year - birth_year;
        if (current_month < birth_month)
            main_year--;
        if (birth_month == current_month)
        {
            if (birth_date > current_date)
                main_year--;
        }
        if (main_year < 0)
        {
            cout << "Case #" << cases << ": Invalid birth date" << endl;
        }
        else if (main_year > 130)
        {
            cout << "Case #" << cases << ": Check birth date" << endl;
        }
        else
            cout << "Case #" << cases << ": " << main_year << endl;
        cases++;
    }

    return 0;
}

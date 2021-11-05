#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, choice, cost = 0;
    cout << "How many place you wanna chooose?" << endl;
    cin >> test_case;
    while (test_case--)
    {
        cout << "Spot1" << endl;
        cout << "Spot2" << endl;
        cout << "Spot3" << endl;
        cout << "Your choice: >> ";
        cin >> choice;
        if (choice == 1)
        {
            cost += 200;
        }
        else if (choice == 2)
        {
            cost += 100;
        }
        else if (choice == 3)
        {
            cost += 50;
        }
    }
    cout << "So your total cost is: " << cost << endl;

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, jumps, high, low;
    int Case = 0;
    int walls[1000];
    cin >> test_case;
    while (test_case--)
    {
        cin >> jumps;
        for (int i = 0; i < jumps; i++)
        {
            cin >> walls[i];
        }
        high = low = 0;
        for (int i = 1; i < jumps; i++)
        {
            if (walls[i] > walls[i - 1])
            {
                high++;
            }
            if (walls[i] < walls[i - 1])
            {
                low++;
            }
        }
        Case++;
        cout << "Case " << Case << ": " << high << " " << low << endl;
    }

    return 0;
}

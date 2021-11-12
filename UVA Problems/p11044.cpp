#include <iostream>
using namespace std;
int main()
{
    int test_case, row, col, sonarrow, sonarcol;
    cin >> test_case;
    while (test_case--)
    {
        cin >> row >> col;
        row -= 2;
        col -= 2;
        sonarrow = row / 3;
        if (row % 3 != 0)
        {
            sonarrow++;
        }
        sonarcol = col / 3;
        if (col % 3 != 0)
        {
            sonarcol++;
        }

        cout << sonarrow * sonarcol << endl;
    }

    return 0;
}

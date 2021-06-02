#include <iostream>
using namespace std;
int main()
{

    int num, row, n;
    cin >> n;
    while (n--)
    {
        cin >> num;
        row = 0;
        for (int i = 1;; i++)
        {
            if (num - i >= 0)
            {
                num -= i;
                row++;
            }
            else
                break;
        }
        cout << row << endl;
    }

    return 0;
}

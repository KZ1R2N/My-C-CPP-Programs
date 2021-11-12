#include <iostream>
using namespace std;

int main()
{
    int t, ar[100000], length, cnt = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> length;

        for (int j = 0; j < length; j++)
        {
            cin >> ar[j];
            cnt += ar[j];
        }
        // if (cnt == length)
        // {
        //     cout << "0" << endl;
        // }
        if (length % length == 0)
            cout << "0" << endl;
        else if (cnt < length)
        {
            cout << "1" << endl;
        }
        else if (cnt > length)
        {
            cout << cnt - length << endl;
        }
        cnt = 0;
    }
}
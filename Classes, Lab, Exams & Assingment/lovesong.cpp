#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string a = {'0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i;
    string b, cum;
    int length, test_case, x, y, count = 0;
    cin >> length >> test_case;
    for (i = 1; i <= length; i++)
    {

        cin >> b[i];
    }

    for (int j = 0; j < test_case; j++)
    {

        cin >> x >> y;
        for (i = x; i <= y; i++)
        {

            cum = b[i];
            int found = 0;
            found = a.find(cum);

            count += found;
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}

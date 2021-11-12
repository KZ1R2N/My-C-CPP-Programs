#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input, teatype, count;
    while (scanf("%d", &teatype) != EOF)
    {
        count = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> input;
            if (teatype == input)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}

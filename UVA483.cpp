#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, i, j, b;
    string s;
    while (getline(cin, s))
    {

        b = -1;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ') 
            {                

                for (j = i - 1; j > b; j--)
                {
                    cout << s[j];
                }

                cout << " ";
                b = i;
            }
        }

        for (i = s.size() - 1; i > b; i--)
        {

            cout << s[i];
        }

        cout << endl;
    }
}

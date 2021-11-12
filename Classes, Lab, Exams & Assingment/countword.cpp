#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string str;
    while (getline(cin, str))
    {
        count = 0;
        str.push_back(' ');
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] >= 'a' and str[i] <= 'z' and str[i + 1] == ' ' || str[i] >= 'A' and str[i] <= 'Z' and str[i + 1] == ' ' || str[i] >= 'a' and str[i] <= 'z' and str[i+1] >= 33 and str[i+1] <= 63 || str[i] >= 'A' and str[i] <= 'Z' and str[i+1] >= 33 and str[i+1] <= 63 )
            {
                count++;
            }
        }
        cout << count << endl;
    }
}


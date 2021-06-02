#include <iostream>

using namespace std;

int main()
{
    int Case = 0;
    int t;

    cin >> t;

    while (t--)
    {

        int n;

        cin >> n;

        int wall[50] = {0};

        for (int i = 0; i < n; i++)

            cin >> wall[i];

        int l = 0, s = 0;

        for (int i = 0; i < n - 1; i++)
        {

            if (wall[i + 1] < wall[i])

                s++;

            if (wall[i + 1] > wall[i])

                l++;
        }

        Case++;
        cout << "Case " << Case << ": " << high << " " << low << endl;
    }

    return 0;
}
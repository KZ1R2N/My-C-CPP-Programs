#include <iostream>
using namespace std;

int main()
{
    long long n, temp;
    int cnt;

    while (cin >> n && n != 0)
    {

        if (n < 0)
            n = abs(n);

        temp = -1;
        cnt = 0;

        for (int i = 2; i * i <= n && n != 1; i++)
        {
            while (n % i == 0)
            {
                n /= i;
                temp = i;
            }

            if (temp == i)
                cnt++;
        }

        if (n != 1 && temp != -1)
            temp = n;

        else if (cnt == 1)
            temp = -1;

        cout << temp << endl;
    }

    return 0;
}

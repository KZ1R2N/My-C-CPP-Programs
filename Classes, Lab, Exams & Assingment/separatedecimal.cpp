#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void J()
{
    int t;
    int n, m;
    long long sum = 0;
    cin >> t;
    while (t--)
    {
        scanf("%d.%d", &n, &m);
        //cout<<n<<" "<<m<<endl;
        sum = sum + n * 12 + m;
        cout << sum / 12 << " Feet, " << sum % 12 << " Inches" << endl;
    }
}

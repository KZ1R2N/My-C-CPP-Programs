#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int sum(int a, int b)
// {
//     cout << a + b << endl;
// }
class group
{
    int a = 70;
    int b = 54;

    friend int study(group);

public:
    int grp();
    // void seta(int x)
    // {
    //     a = x;
    // }
    // int geta()
    // {
    //     return a;
    // }

    int c = 89;
    int d = 50;
};
int study(group abul)
{
    cout << abul.a << endl;
    cout << abul.b << endl;
    cout << abul.c << endl;
    cout << abul.d << endl;
}
// int group ::grp()
// {

//     cin >> b;

//     cout << b + a;
// }

int main()
{
    group object;
    study(object);
    // cout << object.c << endl;
    // cout << object.d << endl;
    // object.grp();
    //object.seta(75);
    //cout << object.geta() << endl;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class ema
{

    int a = 10;

public:
    int b = 20;
    int c = 40;
    int ratun();
    int show_a();
};
int ema ::show_a()
{
    int x;
    x = a;
    cout << a << endl;
}
int ema ::ratun()
{
    int x;
    x = a + b + c;
    cout << a << "+" << b << "+" << c << "=" << x;
}
int main()
{
    ema samiha;
    //cout << samiha.a;;
    samiha.show_a();
    samiha.b;
    samiha.c;
    samiha.ratun();

    return 0;
}

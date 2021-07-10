#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class testclass
{

public:
    int firstvalue = 3;

private:
    friend int ratun(testclass);
    int secondvalue = 4;
};
int ratun(testclass rat)
{
    return rat.secondvalue;
}
int main()
{
    testclass value1, value2;

    cout << ratun(value1);
    return 0;
}

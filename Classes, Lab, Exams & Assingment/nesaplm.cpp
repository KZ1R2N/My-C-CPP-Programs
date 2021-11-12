#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class rectangle
{
    int height;
    int weight;
    int area;

public:
    rectangle()
    {
        cin >> height;
        cin >> weight;
    }
    ~rectangle()
    {
        cout << height * weight << endl;
    }
};

int main()
{
    rectangle obj;
    obj.~rectangle();
    return 0;
}

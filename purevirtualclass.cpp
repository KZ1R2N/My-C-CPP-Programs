#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class shape
{
public:
    virtual void getArea() = 0;
};
class circle : public shape
{
public:
    void getArea()
    {
        cout << "Enter Cicle Radius: " << endl;
        int rad;
        cin >> rad;
        cout << "area of Circle is: " << (3.1416 * rad) << endl;
    }
};
class rectangle : public shape
{
public:
    void getArea()
    {
        cout << "Enter Length and breadth to calculate area of rectangle: " << endl;
        int length, breadth;
        cin >> length >> breadth;
        cout << "area of Rectangle is: " << (length * breadth) << endl;
    }
};
int main()
{
    circle c1;
    c1.getArea();
    rectangle r1;
    r1.getArea();
    return 0;
}

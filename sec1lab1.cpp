#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class employee
{
    string Name;
    string Dept;

public:
    employee()
    {
        Name = "R2N";
        Dept = "CSE";
    }
    void Display()
    {
        cout << "Name = " << Name << endl;
        cout << "Dept = " << Dept << endl;
    }
};
class faculty : public employee
{
    int courses;

public:
    faculty()
    {
        courses = 5;
    }
    void Display()
    {
        cout << "Courses = " << courses << endl;
    }
};
class admin : public employee
{
    int office_hours;

public:
    admin()
    {
        office_hours = 6;
    }
    void Display()
    {
        cout << "office_hours = " << office_hours << endl;
    }
};
int main()
{
    employee obj1;
    faculty obj2;
    admin obj4;

    obj1.Display();
    obj2.Display();
    obj4.Display();

    return 0;
}

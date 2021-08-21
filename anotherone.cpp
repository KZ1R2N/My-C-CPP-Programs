#include <iostream>
using namespace std;
class employe
{
public:
    string name = "sajed", department = "it";
    employe()
    {
        cout << "name = " << name << " department = " << department << endl;
    }
};
class faculty : public employe
{
public:
    int numberOfCourse = 5;
    faculty()
    {
        cout << "In faculty constructor" << endl;
    }
    void show()
    {
        cout << "number Of Courses = " << numberOfCourse << endl;
    }
};
class admin : public employe
{
public:
    int officeHours = 8;
    admin()
    {
        cout << "In admin constructor" << endl;
    }
    void show()
    {
        cout << "office Hours = " << officeHours << endl;
    }
};
int main()
{
    employe ob1;
    faculty ob2;
    admin ob3;
    ob2.show();
    ob3.show();
}
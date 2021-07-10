#include <iostream>

using namespace std;

class registattion
{
    int count = 1;

public:
    void choseCourse(string course_name)
    {

        cout << count << ": " << course_name << endl;
        count++;
    }
};

int main()
{
    int b;
    string a;
    cout << "Enter your course number : ";

    cin >> b;
    registattion obj1;

    if (b < 3)
    {

        cout << "you have chosen less then 3 courses" << endl;
    }
    else if (b > 6)
    {
        cout << "you have chosen less then 3 courses" << endl;
    }
    else if (b >= 3 || b <= 6)
    {
        int c = 1;
        while (c <= b)
        {

            cin >> a;

            c++;
            obj1.choseCourse(a);
        }
    }

    return 0;
}
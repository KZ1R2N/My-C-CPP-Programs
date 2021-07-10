#include <iostream>
#include <string>
using namespace std;

class Registration
{
public:
    string course_name;
    int count = 1;

    void chooseCourse(string course_name)
    {

        cout << count << ": " << course_name << endl;
        count++;
    }
};

int main()
{
    long long id;
    int num, i, semester;
    string course_name;
    cout << "Enter your semester" << endl;
    cin >> semester;
    cout << "Enter your ID" << endl;
    cin >> id;
    Registration o1;

    cout << "How many courses you want to take?" << endl;
    cin >> num;
    if (num >= 3 && num <= 6)
    {
        for (i = 0; i < num; i++)
        {
            cout << "Course Name:" << endl;
            cin >> course_name;
            o1.chooseCourse(course_name);
        }
        cout << "Congratulations! Registration completed!!\n You have taken " << num << " courses" << endl;
    }
    else
        cout << "You have to take minimum 3 courses and maximum 6 courses." << endl;

    return 0;
}
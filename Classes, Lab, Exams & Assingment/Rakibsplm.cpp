#include <iostream>
using namespace std;
class myConstractor
{
    string name;
    int id;

public:
    void setNameId(string nameFromObject, int idFromObject)
    {
        name = nameFromObject;
        id = idFromObject;
    }
    void printNameId()
    {
        cout << "Name =" << name << endl;
        cout << "Id =" << id << endl;
    }
};

int main()
{
    myConstractor object;
    object.setNameId("RAKIB", 58);
    object.printNameId();
    return 0;
}
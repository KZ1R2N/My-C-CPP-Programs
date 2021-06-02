#include <iostream>
using namespace std;
class firstclass
{
    int a, b;

public:
    void seta(int num1)
    {
        a = num1;
    }
    int geta()
    {
        return a;
    }
    void setb(int num2)
    {
        b = num2;
    }
    int getb()
    {
        return b;
    }
};

int main()
{
    firstclass obj1, obj2;
    obj1.seta(522);
    obj2.setb(73);
    cout << obj1.geta() << endl;
    cout << obj2.getb() << endl;
    return 0;
}
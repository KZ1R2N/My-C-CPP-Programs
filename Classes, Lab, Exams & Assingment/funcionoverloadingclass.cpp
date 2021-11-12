#include <bits/stdc++.h>
using namespace std;
class Function_overload
{
public:
    int load(int first_value, int second_value)
    {
        return first_value * second_value;
    }
    int load(float first_value, float second_value)
    {
        return first_value + second_value;
    }
};

int main()
{
    int first_value = 5, second_value = 3;
    Function_overload object1, object2;
    cout << object1.load(first_value, second_value) << endl;
    cout << object2.load(first_value, second_value) << endl;
    return 0;
}

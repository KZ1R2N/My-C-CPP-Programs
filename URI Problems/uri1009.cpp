#include <bits/stdc++.h>
#include <string>
using namespace std;
class salary
{
public:
    salary(double a, double b)
    {
        double total_money;
        total_money = a + b * .15;
        printf("\nTOTAL = R$ %.2lf\n\n", total_money);
    }
};
int main()
{

    double Salary, value;
    string name;
    cin >> name;
    cin >> Salary;
    cin >> value;
    salary objct(Salary, value);

    return 0;
}

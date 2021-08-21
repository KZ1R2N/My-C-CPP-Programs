#include <bits/stdc++.h>
using namespace std;
class Base {
    public:
    void function()
    {
        cout<<"In Base Function"<<endl;
    }
};
class Derived : public Base {
public:
void function() 
{
cout << "In Derived Function" << endl;
}
};
int main() 
{
    Base *rat;
    rat->function();


}


#include <iostream>
#include<string.h>
using namespace std;
class Grandfather
{
public:
    void ted()
    {
        cout<<"base class"<<endl;
    }

};
class Grandmother
{
public:

    void ted2()
    {
        cout<<"base class"<<endl;
    }
};
class Father: public Grandfather
{
    public:
    void tedk()
    {

        cout<<"inherited  grandfather class"<<endl;
    }

};
class Uncle:public Grandfather,public Grandmother
{
public:
    void ted4()
    {

        cout<<"Inherited 2 classes"<<endl;
    }

};
class Son:public Father{
public:
    void ted5()
    {
        cout<<"inherited father class"<<endl;
    }
};
int main()
{
    Grandfather Er;
    Grandmother Er2;
    Father Er3;
    Uncle Er4;
    Son Er5;
    Er.ted();
    Er2.ted2();
    Er3.tedk();
    Er3.ted();
    Er4.ted4();
    Er4.ted();
    Er4.ted2();
    Er5.ted5();
    Er5.tedk();
    Er5.ted();
    return 0;
}
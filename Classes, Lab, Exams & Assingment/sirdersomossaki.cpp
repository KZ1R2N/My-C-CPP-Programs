#include<iostream>
using namespace std;
class Grandfather
{
    public:
    Grandfather()
    {cout<<"eita grandfather base "<<endl;}
    ~Grandfather()
    {
       
    }
};
class Grandmother
{
       public:
    Grandmother()
    {cout<<"eita base grandmother base"<<endl;}
    ~Grandmother()
    {}

};
class Uncle: public Grandfather, public Grandmother
{
    public:
    Uncle()
    {cout<<"eita base uncle"<<endl;}
    ~Uncle()
    {}
};
class Father: public Grandfather
{
    public:
    Father()
    {cout<<"eita base father"<<endl;}
    ~Father()
    {}
};
class Son:public Father
{
public:
    Son()
    {cout<<"eita base son"<<endl;}
    ~Son()
    {}
};

int main()
{   cout<<"called from grandfater object"<<endl;
    Grandfather new1;
   cout<<"called from fater object"<<endl;
    Father new2;
 cout<<"called from son object"<<endl;
    Son new3;
  cout<<"called from uncle object"<<endl;
    Uncle new4;
    
}
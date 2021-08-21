#include <bits/stdc++.h>
using namespace std;
class A
{     public:
       void showA()
      {
          cout<<"Best Of Luck!!"<<endl;
      }
};
class C : virtual public A
{
    
};
 class D : virtual public A
{

};
class E : public C, public D
{

  
};
int main()
{
    E rat;
    rat.showA();
}
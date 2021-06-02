#include <iostream>
using namespace std;
int a=10, b=20, c=a+b;
int main()
{
   
   int a=5, b=5;
   int c=a+b;

   cout <<"the sum of local variable is "<<c<<endl;
   cout <<"the sum of global variable is "<<::c;
   
   
   
   
   
return 0;
}



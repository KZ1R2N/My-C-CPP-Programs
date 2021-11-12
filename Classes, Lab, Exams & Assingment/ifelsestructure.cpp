#include <iostream>
using namespace std;
int main()
{  while (1)
{
   int age;
   cout <<"please enter you age: " <<endl;
   
   cin >>age;
   
   if (age >= 18 && age >0)
   {
       cout <<"you can come to my home\n" <<endl;
       
   }
   else if (age < 1 )
   {
       cout <<"DOnt lie you crap\n" <<endl;
       
   } else if (age < 18)
   {
     cout <<"Sorry man fuck off\n" <<endl;
     
   }
   

}
  return 0;
}

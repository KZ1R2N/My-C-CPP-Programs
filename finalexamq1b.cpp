
#include <iostream>
#include<string.h>
using namespace std;
class personal_Account{
private:

   unsigned long int account_number = 20211103036,balance=2500000;
   friend class viewprivateData;
public:
    string name,location,profession;
    int age;
   void showsomething();

};
class viewprivateData
{    public:
    void showData(personal_Account &r)
    {
         cout<< r.account_number<<endl;
         cout<< r.balance<<endl;
    }
};

// void personal_Account:: showsomething()
//     {
// cout<<"name= Karim Ahmed"<<endl;
//     cout<<"age= 35"<<endl;
//     cout<<"loacation= Agortola"<<endl;
//     cout<<"profession= Teaching"<<endl;
//     }

int main(){
   //personal_Account rat;
   viewprivateData rat2;
 rat2.showData(r);
 rat.showsomething();
   return 0;
}
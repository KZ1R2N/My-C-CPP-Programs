#include <bits/stdc++.h>
using namespace std;
class personal_account
{
  unsigned long int account_number = 20211103036,balance=2500000; 
    friend class viewPrivatedata;           // friend class. 
     public:
    string name,location,profession;
    int age;
   void showsomething();
};  
class viewPrivatedata  
{  
  public:  
    void display(personal_account &a)  
    {  
        cout<<a.account_number<<endl;
        cout<<a.balance<<endl;  
    }  
};  
void personal_account:: showsomething()
    {
cout<<"name= Karim Ahmed"<<endl;
    cout<<"age= 35"<<endl;
    cout<<"loacation= Agortola"<<endl;
    cout<<"profession= Teaching"<<endl;
    }
int main()  
{  
    personal_account a;  
    viewPrivatedata b;  
    cout<<"Public Data:"<<endl;

    a.showsomething(); 
    cout<<"Private Data:"<<endl;
    b.display(a); 
    return 0;  
}  

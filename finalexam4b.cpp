#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    string ans;

    cout<<"Enter your age : ";
    cin>>age;

    try
    {
        if(age<=0)throw age;
    }

    catch(int x)
    {
        cout<<"Invalid age.Try again"<<endl;
        return 0;
    }

    if(age>=30)
    {
        cout<<"Have you taken a does of the vaccne previously? (Press y for yes,n for no)"<<endl;
        cin>>ans;

        if(ans=="y")
          cout<<"You are allowed for a second does."<<endl;

        else cout<<"You are eligible to register for the vaccine."<<endl;

    }

    else cout<<"You are not eligble for the vaccine."<<endl;

    cout<<endl;
    cout<<"Stay home,stay safe."<<endl;
    cout<<"Be sure to wear a mask and maintain social distancing if you go out"<<endl;

    return 0;
}
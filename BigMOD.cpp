#include<bits/stdc++.h>
using namespace std;
int bigmod(int Base,int Power,int mod)
{
    if(Power==0)return 1;
    int x=bigmod(Base,Power/2,mod);
    cout<<"x ="<<x<<endl;
    x=(x*x)%mod;
    if(Power%2==1)x=(x*(Base%mod))%mod;
    return x;
}
int main()
{
     int Base,Power,mod; //10 100 25
     while(1)
     {
         cin>>Base>>Power>>mod;
         cout<<bigmod(Base,Power,mod)<<endl;
     }

     return 0;
}

#include <bits/stdc++.h>
using namespace std;
template <typename temp>
int reversevalue(temp str)
{
  reverse(str.begin(), str.end());
  cout<<str<<endl;
}

int main()
{
    string str;
    cin>>str;
    reversevalue(str);
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int input, value,value2;
  int test_case;
  cin>>test_case;
  while (test_case--)
  {
      cin>>input;
      value2= 100 - input;
      value = 100 / __gcd(value2, input);     
      cout<<value<<endl;
  }
  
}
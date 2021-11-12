#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, count,COUNT,value, test_case;
    
    int arr[10000];
    
    cin>> test_case;
    while(test_case--)
    {
        cin>> number;
        count = 0;
        COUNT = 0;
        value = 0;
        for (int i = 0; i < number; i++)
        {
           cin>> arr[i];
           if (arr[i]==1)
            {
                count++;
            }
            else
            {
                COUNT++;
            }
            value += arr[i];
        }
     
        if (value % 2==1 || COUNT % 2 == 1 && count == 0 )
        {
            cout<<"NO"<<endl;
        }
      
        else 
        {
            cout<<"YES"<<endl;
        }
    }


}
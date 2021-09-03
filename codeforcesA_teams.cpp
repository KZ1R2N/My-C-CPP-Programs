#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case,value=0;
    cin>>test_case;
int arr[100010];
   while(test_case--)
    {
        
        int count=0;

        for(int i=0; i<3; i++)
        {

            cin>>arr[i];
            if(arr[i]==1)
            {
            count++;
                
            } 
        }
        if(count>=2) 
        {

        value++;
        }

    }
    cout<<value<<endl;

    return 0;
}

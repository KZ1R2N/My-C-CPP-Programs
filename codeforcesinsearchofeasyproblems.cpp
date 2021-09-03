#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100010], count = 0,lenth;
    cin>>lenth;
    for (int i = 0; i <lenth; i++)
    {
        cin>>arr[i];
        if (arr[i]==1)
        count++;
        //else break;
    }   
    if(count>0)
    {
        cout<<"HARD"<<endl;

    } 
    else cout<<"EASY"<<endl;

}
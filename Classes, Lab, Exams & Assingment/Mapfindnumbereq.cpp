#include <bits/stdc++.h>
using namespace std;
int arr[100010];
int main()
{
    int input, input2, output;
    cin >> input;
    map<int, int> rat;
    for (int i = 0; i < input; i++)
    {
        cin >> arr[i];
        rat[arr[i]] = 1;
    }
    cin >> input2;
    for (int i = 0; i < input; i++)
    {
        output = input2 - arr[i];
    }
    if (rat[output] == 1)
    {
        cout << "YES" << endl;
    
    } 
    else cout<<"NO" << endl;
}
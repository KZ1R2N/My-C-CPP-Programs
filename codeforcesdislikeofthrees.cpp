#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input, value, test_case;
    cin>> test_case;
    int max = 1000000;
    vector<int>rat;
    for(int i=0;i<max; i++)
    {
        if (i%3 == 0)
        {
            continue;
        }
        else if (i%10 == 3)
        {
            continue;
        }
        rat.push_back(i);
    }
    while(test_case--)
    {
        value = 0;
        cin>> input;
        cout<< rat[input -1]<<endl;
    }
   
 

}
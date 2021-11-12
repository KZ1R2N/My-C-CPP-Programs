
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int props, hunters, objects;
    while (scanf("%d %d %d", &props, &hunters, &objects) == 3)
    {

        if (props <= objects - hunters)
        {
            cout << "Props win!" << endl;
        }
        else
        {
            cout << "Hunters win!" << endl;
        }
    }

    return 0;
}

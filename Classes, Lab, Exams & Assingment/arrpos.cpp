
#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int f, l, n;
    n = sizeof(arr) / sizeof(arr[0]);
    f = arr[0];
    l = arr[n - 1];
    cout << "First element: " << f << endl;
    cout << "Last element: " << l << endl;
    return 0;
}

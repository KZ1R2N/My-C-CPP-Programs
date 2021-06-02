#include <cstdio>
using namespace std;

int main()
{
    int test_case, animal, n, p, farmer;

    cin >> test_case;

    while (test_case--)
    {
        int value = 0;

        cin >> farmer;
        for (int i = 0; i < farmer; i++)
        {

            cin >> animal >> n >> p;
            value += animal * p;
        }
        cout << value << endl;
    }

    return 0;
}
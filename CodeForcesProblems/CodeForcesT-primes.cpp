#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[1000010];
vector<long long int> rat;
void seiveprime()
{
    int i, j;

    for (i = 3; i < 1000010; i += 2)
    {
        if (arr[i] == 0)
        {

            rat.push_back(i * i);
            if (i + i > 1000010)
                continue;
            for (j = i + i; j <= 1000010; j += i)
                arr[j] = 1;
        }
    }
}
int check_perfect_square(long long input)
{
    double sqrt_input = sqrt(input);
    if (sqrt_input == int(sqrt_input))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

    seiveprime();

    int test_case;
    long long input, square;

    cin >> test_case;
    while (test_case--)
    {
        cin >> input;
        //square = ceil(sqrt(input));
        square = int(sqrt(input));
        if (input == 4)
        {
            cout << "YES" << endl;
        }
        else if (input % 2 == 0 or input == 1)
        {
            cout << "NO" << endl;
        }
        else if (check_perfect_square(input) == 1 && arr[square] == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

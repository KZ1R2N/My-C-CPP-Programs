// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string digit;
//     int value, input, sum;
//     while (cin >> digit)
//     {
//         if (digit == "END")
//             break;
//         stringstream rat(digit);
//         rat >> input;
//         value = input % 10;
//         while (input > value)
//         {
//             input--;
//         }
//         cout << input + 1 << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int getMinimum(int i, string number)
{

    stringstream ss;
    int digits = number.size();

    ss << digits;

    if (ss.str() == number)
        return i;

    return getMinimum(++i, ss.str());
}

int main()
{

    string input;
    int answer;

    while (cin >> input)
    {
        if (input == "END")
            break;

        answer = getMinimum(1, input);
        printf("%d\n", answer);
    }

    return 0;
}

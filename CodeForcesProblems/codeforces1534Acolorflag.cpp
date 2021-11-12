#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case, row, col, cnt = 1;
    char arr[100][100];
    int count = 1;
    cin >> test_case;
    while (test_case--)
    {
        cin >> row >> col;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (arr[i][j] != '.')
                {
                    if ((i + j) % 2 == 0 && arr[i][j] != 'R')
                        count = 0;
                    else if ((i + j) % 2 == 1 && arr[i][j] != 'W')
                        count = 0;
                }
            }
        }
        count = 1;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (arr[i][j] != '.')
                {
                    if ((i + j) % 2 == 0 && arr[i][j] != 'W')
                        count = 0;
                    else if ((i + j) % 2 == 1 && arr[i][j] != 'R')
                        count = 0;
                }
            }
        }
        count = 2;
        if (count == 1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    if ((i + j) % 2 == 0)
                        cout << 'R';
                    else
                        cout << 'W';
                }
                cout << endl;
            }
        }
        else if (count == 2)
        {
            cout << "YES" << endl;
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    if ((i + j) % 2 == 0)
                        cout << 'W';
                    else
                        cout << 'R';
                }
                cout << endl;
            }
        }
        else if (count == 0)
            cout << "NO" << endl;
    }
}

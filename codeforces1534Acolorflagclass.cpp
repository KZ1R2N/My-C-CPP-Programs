#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class color
{
    int test_case, row, col;
    char arr[100][100];

public:
    int takearr();
    int checkarr();
    int checkarr2();
    int getrow();
    int getcol();
};
int color ::takearr()
{
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}
int color ::getrow()
{
    return row;
}
int color ::getcol()
{
    return col;
}
int color ::checkarr()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] != '.')
            {
                if ((i + j) % 2 == 0 && arr[i][j] != 'R')
                    return false;
                else if ((i + j) % 2 == 1 && arr[i][j] != 'W')
                    return false;
            }
        }
    }
    return true;
}
int color ::checkarr2()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] != '.')
            {
                if ((i + j) % 2 == 0 && arr[i][j] != 'W')
                    return false;
                else if ((i + j) % 2 == 1 && arr[i][j] != 'R')
                    return false;
            }
        }
    }
    return true;
}
int main()
{
    color rat;
    int test_case, row, col;
    cin >> test_case;
    while (test_case--)
    {
        rat.takearr();
        rat.checkarr();
        rat.checkarr2();
        row = rat.getrow();
        col = rat.getcol();

        if (rat.checkarr())
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
        else if (rat.checkarr2())
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
        else
            cout << "NO" << endl;
    }
}

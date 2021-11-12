
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int first_player, second_player, third_player, fourth_player, test_case;
    cin >> test_case;
    while (test_case--)
    {
        cin >> first_player >> second_player >> third_player >> fourth_player;
        int first_max = max(first_player, second_player);
        int first_min = min(first_player, second_player);
        int second_max = max(third_player, fourth_player);
        int second_min = min(third_player, fourth_player);
        if (first_min > second_max || second_min > first_max)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {

//     int ar[1000],winner1, winner2, sum=0, sum1=0;

//     for(int i=0; i< 4; i++)
//     {
//         cin>>ar[i];
//     }

//     if (ar[0] > ar[1]) winner1=ar[0];
//     else winner1= ar[1];

//     if(ar[2] > ar[3]) winner2= ar[2];
//     else winner2= ar[3];

//     sum=winner1 + winner2;

//     for(int i=0; i< 4; i++){
//     sort(ar,ar+4);
//     }

//     for(int i=2; i< 4; i++)
//     {

//     sum1+=ar[i];
//     }

// if(sum1>sum) cout<<"NO"<<endl;
//     else cout<<"Yes"<<endl;

//     }
//     return 0;
// }
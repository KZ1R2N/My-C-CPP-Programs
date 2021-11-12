// // CPP program to demonstrate pre increment
// // operator.
#include <iostream>
using namespace std;

int main()
{
	int x = 10, a;

	a = ++x; //a = 11 x = 11
	//a = x++;   //a = 10  x = 11
	cout << "\na = " << a;

	cout << "\nx = " << x;

	return 0;
}

// #include <stdio.h>
// int main()
// {
// 	int arr[115], n, i, a, j;
// 	while (scanf("%d", &n) && n)
// 	{
// 		for (i = 0; i <= 110; i++)
// 		{
// 			arr[i] = 0;
// 		}
// 		for (i = 1; i <= n; i++)
// 		{
// 			scanf("%d", &a);
// 			arr[a] = arr[a] + 1;
// 		}

// 		for (i = 0; i <= 9; i++)
// 		{
// 			a = arr[i];
// 			for (j = 1; j <= a; j++)
// 			{
// 				printf("%d ", i);
// 			}
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

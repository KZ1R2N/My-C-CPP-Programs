#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long countPairsBruteForce(long long X[], long long Y[],
                                   long long m, long long n)
    {
        long long ans = 0;

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (pow(X[i], Y[j]) > pow(Y[j], X[i]))
                    ans++;
        return ans;
    }
}

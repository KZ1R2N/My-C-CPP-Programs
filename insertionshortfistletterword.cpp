#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while (1)
    {
        printf("enter the number of words: ");
        scanf("%d", &n);

        char word[n][100];

        for (int i = 0; i < n; i++)
            scanf(" %s", word[i]);

        for (int i = 1; i < n; i++)
        {
            int j = i;

            while (strcmp(word[j], word[j - 1]) < 0 && j)
            {
                char temp[100];
                // strcpy(temp, word[j]);
                // strcpy(word[j], word[j - 1]);
                // strcpy(word[j - 1], temp);
                swap(word[j], word[j - 1]);
                j--;
            }
        }

        for (int i = 0; i < n; i++)
            printf("%s ", word[i]);

        printf("\n\n");
    }
    return 0;
}
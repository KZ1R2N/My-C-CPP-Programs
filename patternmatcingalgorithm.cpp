#include <stdio.h>
#include <string.h>
int main()
{
    char text[10000];
    char pattern[10000];
    gets(text);
    gets(pattern);
    int value = 0, count = 0;
    if (strlen(text) < strlen(pattern))
    {

        printf("Sorry Patter Cannot be found!");
    }
    else
    {

        for (int i = 0; i <= strlen(pattern) - strlen(text); i++)
        {
            int j = 0;
            count += strlen(pattern);
            for (j = 0; j < strlen(text); j++)
            {

                if (text[i + j] != pattern[j])
                {
                    break;
                }
            }

            if (j == strlen(pattern))
            {

                printf("pattern found at index %d \n", i);
                printf("Patter Comparison Count is: %d", count);
                break;
            }
            else
                printf("pattern not found at index %d \n", i);
        }
    }
    return 0;
}

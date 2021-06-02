#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int test_case;
    scanf("%d", &test_case);
    while (test_case--)
    {
        float f;
        scanf("%f", &f);
        char s_value[100];
        sprintf(s_value, "%.1f", f);
        char s_integral[60], s_fractional[60];
        int i, found = 0, count = 1, integral, fractional;

        for (i = 0; s_value[i] != '\0'; i++)
        {
            if (!found)
            {
                if (s_value[i] == '.')
                {
                    found = 1;
                    s_integral[i] = '\0';
                    continue;
                }
                s_integral[i] = s_value[i];
                count++;
            }
            else
                s_fractional[i - count] = s_value[i];
        }
        s_fractional[i - count] = '\0';

        integral = atoi(s_integral);
        fractional = atoi(s_fractional);
        printf("%d Feet, %d Inches\n", integral, fractional);
    }

    return 0;
}
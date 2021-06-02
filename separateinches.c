#include <stdio.h>
void double2Ints(double f, int p, int *i, int *d)
{
    // f = float, p=decimal precision, i=integer, d=decimal
    int li;
    int prec = 1;

    for (int x = p; x > 0; x--)
    {
        prec *= 10;
    }; // same as power(10,p)

    li = (int)f;                 // get integer part
    *d = (int)((f - li) * prec); // get decimal part
    *i = li;
}

void test()
{
    double df = 3.14159265;
    int i, d;
    for (int p = 2; p < 9; p++)
    {
        double2Ints(df, p, &i, &d);
        printf("d2i (%d) %f = %d.%d\r\n", p, df, i, d);
    }
}
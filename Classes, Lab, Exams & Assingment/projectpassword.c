#include <stdio.h>

int main()
{
    char password[15];
    int count = 0;
    char ch;
    printf("Enter Your Password Here: \n");
    while (1)
    {
        ch = getch();
        if (ch == 13) //13 = ENTER
        {
            password[count] = '\0';
            break;
        }
        else if (ch == 8) // 8 = backspace     1234  ***
        {
            if (count > 0)
            {
                count--;
                printf("\b \b");
            }
        }

        else
        {
            password[count] = ch;
            count++;
            printf("*");
        }
    }
    printf("\nYour password is %s", password);
}

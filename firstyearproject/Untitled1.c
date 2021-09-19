#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#define limit 3
void gotoxy(int x, int y);
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds)
        ;
}

struct data
{
    char questions[9][100];
    char ans[3][15];

    bool rep[3];
};

int main()
{
    FILE *fp, *fp2;

    fp = fopen("input.txt", "r");

    struct data p1;

    for (int i = 0; i < (limit * 3); i += 3)
    {
        fgets(p1.questions[i], 100, fp);
        fgets(p1.questions[i + 1], 100, fp);
        fgets(p1.questions[i + 2], 100, fp);
    }

    fclose(fp);

    fp2 = fopen("ans.txt", "r");

    for (int i = 0; i < limit; i++)
        fgets(p1.ans[i], 100, fp2);

    srand(time(0));
    int ans, score = 0;

    printf("\t\t+--------------------------------------------+-----------------------------------------+\n");
    printf("\t\t|                            WELCOME TO AARchive QUIZ GAME                             |\n");
    printf("\t\t+--------------------------------------------+-----------------------------------------+\n");
    printf("\t\t\t\tPress 1 to start the game and 0 to exit the game\n\n\t\t\t\t\t\t     ");

    int input;
    char answer;
    scanf("%d", &input);

    if (input)
    {
        system("cls");

        for (int i = 1 * 20; i <= 50; i++)
        {
            system("cls");
            gotoxy(50, 0);
            printf("\n\n\n\t\t\t  Loading... \n\t\t");

            for (int j = 1; j <= i; j++)

                printf("|");

            printf("\n\n\t\t %d Percent", 2 * i);

            if (i > 1 && i < 48)

                printf("\n\n\tCreating Your Question Set: ");

            else

                printf("\n\n\tComplete. Press Enter to Continue \n");
        }
        getch();

        printf("\n\n\t\t\t\t      Loading Complete. Press enter to Continue \n");
        printf("\t\t\t\t                          ");

        getch();
        printf("\n");

        for (int i = 0; i < limit;)
        {
            int temp = rand() % 3;
            temp *= 3;

            if (p1.rep[temp / 3] == false)
            {
                p1.rep[temp / 3] = true;
                i++;

                printf("%s\n %s %s\n", p1.questions[temp], p1.questions[temp + 1], p1.questions[temp + 2]);
                printf("Your answer:- ");
                scanf(" %c", &answer);
                char *test = strrchr(p1.ans[temp / 3], answer);
                ;

                if (test)
                {
                    printf("\nCorrect answer!!\n");
                    score++;
                }
                else
                    printf("\nWrong answer!!\n");

                delay(1);
                system("cls");
            }
        }

        printf("Your score is %d/3\n", score);
        printf("\nThanks for playing");
        delay(2);
    }

    else
        printf("You have exited the game\n");

    return 0;
}

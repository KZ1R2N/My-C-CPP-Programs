#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>
#include "myhead.h"
#define limit 3

struct data
{
    char questions[9][100];
    char ans[3][15];
};

int main()
{

    //Generating the questions and answer
    FILE *fp;

    fp = fopen("input.txt", "r");

    struct data p1;

    for (int i = 0; i < (limit * 3); i += 3)
    {
        fgets(p1.questions[i], 100, fp);
        fgets(p1.questions[i + 1], 100, fp);
        fgets(p1.questions[i + 2], 100, fp);
    }

    fclose(fp);

    fp = fopen("ans.txt", "r");

    for (int i = 0; i < limit; i++)
        fgets(p1.ans[i], 100, fp);

    fclose(fp);

    //Finished Generating the questions and answera

    int temp;

start:
    temp = display_start_menu();

    if (temp == 1) //if login selected
    {
        char echo[100] = "echo ";
        char ext[] = ".txt";
        char cd[35] = "cd ";

        char pass[50];
        char name[30];
        char temp_pass[50];

        gotoxy(35, 5);
        printf("Enter Username :- \n");
        gotoxy(36, 7);

        printf("> ");
        scanf("%s", name);
        system("cls");

        // gotoxy(35, 5);
        // printf("Enter Password :- \n");
        // gotoxy(36, 7);

        // printf("> ");
        // scanf(" %s", pass);
        //char password[15];
        int count = 0;
        char ch;
        // printf("Enter Your Password Here: \n");
        while (1)
        {
            gotoxy(35, 5);
            printf("Enter Password :- \n");
            gotoxy(36, 7);

            printf("> ");
            ch = getch();
            if (ch == 13) //13 = ENTER
            {
                pass[count] = '\0';
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
                pass[count] = ch;
                count++;
                printf("*");
            }
        }
        // printf("\nYour password is %s", password);
        system("cls");
        strcat(name, ext);

        fp = fopen(name, "r+");
        fgets(temp_pass, 100, fp);

        int len = strlen(pass);
        bool flag = true;

        for (int i = 0; i < len; i++)
            if (pass[i] != temp_pass[i])
            {
                flag = false; //checking if passwords match.strings read from file give rise
                break;        //to complications thats why strcmp was not used
            }

        if (fp == NULL || flag == false)
        {
            gotoxy(35, 5);
            printf("Wrong username or password\n");
            delay(2);
            system("cls");
            fclose(fp);
            goto start;
        }

        gotoxy(35, 5);
        printf("Logged in successfully!!\n");
        delay(2);
        system("cls");

        char num[5];
        bool rep[3] = {0};

        while (fgets(num, 5, fp))
        {
            int dig = atoi(num);
            rep[dig] = true;
        }

        srand(time(0));
        int ans, score = 0;

        printf("\n\n\t\t\t\t\t WELCOME TO AArchive QUIZ GAME!! \n");
        printf("\t\t\t\tPress 1 to start the game and 0 to exit the game\n\n\t\t\t\t\t\t     ");

        int input;
        char answer;
        scanf("%d", &input);

        if (input)
        {
            system("clear");

            for (int i = 5; i <= 100; i += 5)
            {
                printf("\n\n\n\n\t\t\t\t\t\t  Loading...%d Percent", i);
                system("clear");
            }

            printf("\n\n\t\t\t\t      Loading Complete. Press enter to Continue \n");
            printf("\t\t\t\t                          ");

            getch();
            system("cls");
            printf("\n");

            flag = true;

            for (int i = 0; i < limit; i++)
            {
                if (rep[i] == false)
                    flag = false;
                break;
            }

            if (flag)
            {
                printf("You have finished the game\n");
                fclose(fp);
                delay(2);
                system("cls");
                goto start;
            }

            for (int i = 0; i < limit;)
            {
                int temp = rand() % 3;

                temp *= 3;
                if (rep[temp / 3] == false)
                {
                    fprintf(fp, "%d\n", (temp / 3));
                    rep[temp / 3] = true;
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
            system("cls");
        }
    }

    else if (temp == 2) //if register selected
    {
        char echo[100] = "echo ";
        char pass[50];
        char ext[] = ".txt";
        char name[30];
        char cd[35] = "cd ";

        gotoxy(35, 5);
        printf("Enter Username :- \n");
        gotoxy(36, 7);

        printf("> ");

        scanf(" %s", name);
        system("cls");
        gotoxy(35, 5);
        printf("Enter Password :- \n");
        gotoxy(36, 7);

        printf("> ");

        scanf(" %s", pass);
        system("cls");

        strcat(echo, pass);
        strcat(echo, " >");
        strcat(echo, name);
        strcat(echo, ext);
        system(echo);

        gotoxy(45, 5);
        printf("Registration Complete");

        delay(2);
        system("cls");

        goto start;
    }

    else if (temp == 3) //if quit selected
    {
        temp = display_quit_menu();
        if (temp == 1)
            return 0;

        else
            goto start;
    }
}

#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
static int i = 0;
struct web
{
    char name[30], pass[30];
} w[99];
int n;
void login(void);
void reg(void);
int main()
{
    SetConsoleTitle("Donkey");
    system("cls");
    printf("+--------------------------------------------+-----------------------------------------+\n");
    printf("|                            WELCOME TO AARchive QUIZ GAME                             |\n");
    printf("+--------------------------------------------+-----------------------------------------+\n");
    //printf("\n\n\n\n\n\t\t\t\tWELCOME TO AARchive GAME");
    printf("\n\t\t\t\t=====================");

    printf("\n\n\n\n\t\t\tPress Enter to proceed...!!\n");
    if (getch() == 13)
        system("cls");
XY:
    //printf("\n\n\n\t\t\t1. LOGIN\t\t2. REGISTER");
    printf("+--------------------------------------------+-----------------------------------------+\n");
    printf("| 1. LOGIN                                   |   2. REGISTER                           |\n");
    printf("|                                            |                                         |\n");
    printf("+--------------------------------------------+-----------------------------------------+\n");
    printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        system("cls");

        login();
        break;
    case 2:
        system("cls");
        reg();
        break;
    default:
        printf("\n\n\t\t\t\tNO MATCH FOUND");
        printf("\n\n\t\t\tPress Enter to re-Enter the choice");
        if (getch() == 13)
            system("cls");
        goto XY;
    }
    return 0;
}
void reg()
{
    system("color D");
    FILE *fp;
    char c, checker[30];
    int z = 0;
    fp = fopen("Web_reg.txt", "ab+");
    printf("\n\n\t\t\t\tWELCOME TO REGISTER ZONE");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^");
    for (i = 0; i < 100; i++)
    {
        printf("\n\n\t\t\t\t  ENTER USERNAME: ");
        scanf("%s", checker);
        while (!feof(fp))
        {
            fread(&w[i], sizeof(w[i]), 1, fp);
            if (strcmp(checker, w[i].name) == 0)
            {
                printf("\n\n\t\t\tUSERNAME ALREDY EXISTS");
                system("cls");
                reg();
            }
            else
            {
                strcpy(w[i].name, checker);
                break;
            }
        }
        printf("\n\n\t\t\t\t  DESIRED PASSWORD: ");
        while ((c = getch()) != 13)
        {
            if (c == 8)
            {
                z--;
                printf("\b \b");
            }
            else
            {

                w[i].pass[z++] = c;
                printf("%c", '*');
            }
        }
        fwrite(&w[i], sizeof(w[i]), 1, fp);
        fclose(fp);
        printf("\n\n\tPress enter if you agree with Username and Password");
        if ((c = getch()) == 13)
        {
            system("cls");
            printf("\n\n\t\tYou are successfully registered");
            printf("\n\n\t\tTry login your account??\n\n\t\t  ");
            printf("> PRESS 1 FOR YES\n\n\t\t  > PRESS 2 FOR NO\n\n\t\t\t\t");
            scanf("%d", &n);
            switch (n)
            {
            case 1:
                system("cls");
                login();
                break;
            case 2:
                system("cls");
                printf("\n\n\n\t\t\t\t\tTHANK YOU FOR REGISTERING");
                break;
            }
        }
        break;
    }
    getch();
}
void login()
{
    // BEEP(1700, 500);
    FILE *fp;
    char c, name[30], pass[30];
    int z = 0;
    int checku, checkp;
    fp = fopen("Web_reg.txt", "rb");
    printf("\n\n\t\t\t\tWELCOME TO LOG IN ZONE");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^");
    for (i = 0; i < 1000; i++)
    {
        printf("\n\n\t\t\t\t  ENTER USERNAME: ");
        scanf("%s", name);
        printf("\n\n\t\t\t\t  ENTER PASSWORD: ");
        while ((c = getch()) != 13)
        {
            pass[z++] = c;
            printf("%c", '*');
        }
        pass[z] = '\0';
        while (!feof(fp))
        {
            fread(&w[i], sizeof(w[i]), 1, fp);
            checku = strcmp(name, w[i].name);
            checkp = strcmp(pass, w[i].pass);
            if (checku == 0 && checkp == 0)
            {
                system("cls");
                printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
                PlaySound(TEXT("E:\\IDM\\Doc\\1st year project\\login project.wav"), NULL, SND_SYNC);
                printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY");
                break;
            }
            else if (checku == 0 && checkp != 0)
            {
                printf("\n\n\n\t\t\tWRONG PASSWORD!! Not %s??", name);
                printf("\n\n\t\t\t\t  (Press 'Y' to re-login)");
                if (getch() == 'y' || getch() == 'Y')
                    login();
            }
            else if (checku != 0)
            {
                printf("\n\n\n\t\t\tYou have entered wrong password OR\n\n\n\t\t\tYou are not a Registered User\n \t\t\tPress enter to register yourself");
                system("color 04");
                if (getch() == 13)
                    system("cls");
                reg();
            }
        }
        break;
    }
    getch();
}


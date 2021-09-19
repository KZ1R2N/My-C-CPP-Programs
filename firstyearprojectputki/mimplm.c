//.......................CSE100 project..................
#include <stdio.h>
#include <conio.h>
#include <string.h>
//...........................admin login.......................
struct admin_login
{
    char a_first_name[20];
    char a_last_name[20];
    char a_username[20];
    char a_pass[20];
    int a_id[20];
    char a_email[20];
};
//...........................user login.......................
struct user_login
{
    char u_first_name[20];
    char u_last_name[20];
    char u_username[20];
    char u_pass[20];
    int u_id[20];
};
//...........................admin registration.......................
admin_registe()
{
    system("CLS");

    FILE *file;
    file = fopen("test.text", "w");
    struct admin_login l;
    printf("\n\n\n\t\t\t*************** Enter Admin's Information ********\n\n");
    printf("\t\t\t\t\tEnter Admin's First Name : ");
    scanf("%s", l.a_first_name);
    printf("\t\t\t\t\tEnter Admin's Last Name  : ");
    scanf("%s", l.a_last_name);
    printf("\t\t\t\t\tEnter Admin's User Name  : ");
    scanf("%s", l.a_username);
    printf("\t\t\t\t\tEnter Admin's Password   : ");
    int i = 0;
    char ch;
    ch = _getch();
    while ((ch = _getch()) != 13)
    {
        l.a_pass[i] = ch;
        i++;
        printf("*");
    }
    l.a_pass[i] = '/0';
    printf("\n\t\t\t\t\tEnter Admin's ID         : ");
    scanf("%d", l.a_id);
    printf("\t\t\t\t\tEnter Admin's Email      : ");
    scanf("%s", l.a_email);
    fwrite(&l, sizeof(l), 1, file);
    fclose(file);

    printf("\n\nNow login with User name & Password\n");
    printf("Press any key to continue......");
    getch();
    system("CLS");
    admin_login();
}
//...........................admin login.......................
admin_login()
{
    system("CLS");

    char username[50], pass[50], email[50];
    int id[50];
    FILE *file;
    file = fopen("test.text", "r");
    struct admin_login l;
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tAdmin's User Name : ");
    scanf("%s", &username);
    printf("\n\t\t\t\t\t\tAdmin's Password  : ");
    int i = 0;
    char ch;
    ch = _getch();
    while ((ch = _getch()) != 13)
    {
        pass[i] = ch;
        i++;
        printf("*");
    }
    pass[i] = '/0';
    printf("\n\n\t\t\t\t\t\tAdmin's ID        : ");
    scanf("%d", &id);

    while (fread(&l, sizeof(l), 1, file))
    {
        if (strcmp(username, l.a_username) == 0 && strcmp(pass, l.a_pass) == 0 &&
            strcmp(id, l.a_id) == 0)
            printf("\n\n\n\t\t\t\t\t\t*Successful login*\n");
        else
            printf("\n\t\t\t\tPlease enter correct Username & Password\n");
    }
}
fclose(file);
//...........................user registration.......................
user_registe()
{
    system("CLS");

    FILE *file;
    file = fopen("test.text", "w");
    struct user_login l;
    printf("\n\n\n\t\t\t*************** Enter Your Information ********\n\n");
    printf("\t\t\t\t\tEnter User's First Name : ");
    scanf("%s", l.u_first_name);
    printf("\t\t\t\t\tEnter User's Last Name  : ");
    scanf("%s", l.u_last_name);
    printf("\t\t\t\t\tEnter User's User Name  : ");
    scanf("%s", l.u_username);
    printf("\t\t\t\t\tEnter User's Password   : ");
    int i = 0;
    char ch;
    ch = _getch();
    while ((ch = _getch()) != 13)
    {
        l.u_pass[i] = ch;
        i++;
        printf("*");
    }
    l.u_pass[i] = '/0';
    printf("\n\t\t\t\t\tEnter User's ID         : ");
    scanf("%d", l.u_id);
    fwrite(&l, sizeof(l), 1, file);
    fclose(file);

    printf("\n\nNow login with User name & Password\n");
    printf("Press any key to continue......");
    getch();
    system("CLS");
    user_login();
}

//...........................user login.......................
user_login()
{
    system("CLS");

    char username[50], pass[50], id[50];
    FILE *file;
    file = fopen("test.text", "r");
    struct user_login l;
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tUser's User Name : ");
    scanf("%s", &username);
    printf("\n\t\t\t\t\t\tUser's password : ");
    int i = 0;
    char ch;
    ch = _getch();
    while ((ch = _getch()) != 13)
    {
        pass[i] = ch;
        i++;
        printf("*");
    }
    pass[i] = '/0';
    printf("\n\n\t\t\t\t\t\tUser's ID        : ");
    scanf("%d", &id);
    while (fread(&l, sizeof(l), 1, file))
    {
        if (strcmp(username, l.u_username) == 0 && strcmp(pass, l.u_pass) == 0 && strcmp(id, l.u_id) == 0)
            printf("\n\n\n\t\t\t\t\t\t*Successful login*\n");
        else
            printf("\n\t\t\t\tPlease enter correct Username & Password\n");
    }
}
fclose(file);
//............................................................
int main()
{
    system("color 5b");
    printf("\n\n\n\t\t\t****************** Welcome To Our Restaurant ******");
    printf("\n\n\n\t\t\t*********** Please Choose What You Want to select************\n");
    printf("\n\t\t\t\t*********** Press 1 for Admin ************\n");

    printf("\t\t\t\t*********** Press 2 for User *******************\n");
    printf("\t\t\t\t*********** Press 3 for Exit *******************\n");
    int n, rat = 0;
    scanf("%d", &n);
    if (n == 1)
    {
        system("CLS");

        printf("\n\t\t\t\t*********** Press 1 for Admin register************\n");
        printf("\n\t\t\t\t*********** Press 2 for Admin login************\n");
        scanf("%d", &rat);
        if (rat == 1)
            admin_registe();
        if (rat == 2)
            admin_login();
    }
    if (n == 2)
    {
        system("CLS");

        printf("\t\t\t\t*********** Press 1 for User login *******************\n");
        printf("\t\t\t\t*********** Press 2 for User login *******************\n");
        scanf("%d", &rat);
        if (rat == 1)
            user_registe();
        if (rat == 2)
            user_login();
    }

    if (n == 3)
        return 0;
}
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

int i = 0;

struct admin_login
{
    char a_first_name[20];
    char a_last_name[20];
    char a_username[20];
    char a_pass[20];
    char a_id[20];
    char a_email[20];
};

struct user_login
{
    char u_first_name[20];
    char u_last_name[20];
    char u_username[20];
    char u_pass[20];
    char u_id[20];
};

struct book_info
{
    char Id[20];
    char name[20];
    char auth[20];
    int quan[20];
    int rack[20];
};

void button();
int cse();
int eee();
int eng();
int math();
int e_book_list();
int admin_dashboard();
int add_book();
int view_book();
int book_list();
int user_dashboard();
void admin_login();
void admin_registe();
void user_registe();
void user_login();
void homepage();

//............................................................
int main()
{
    homepage();
    getch();
}

void button()
{
    int opt;
    printf("\n1.Back to homepage.");
    printf("\n2.Back to Admin Dashboard.");
    printf("\n3.Back to User Dashboard.");
    printf("\n4.Exit");
    printf("\n\nEnter the option:");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        homepage();
        break;
    case 2:
        admin_dashboard();
        break;
    case 3:
        user_dashboard();
        break;
    case 4:
        printf("Exit.");
        break;
    }
}
int cse()
{
    system("CLS");
    printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....Course.....*...Author...*..Code..*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....CSE101.....*......A.....*..101...*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....CSE103.....*......B.....*..103...*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....CSE111.....*......C.....*..111...*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");

    printf("\n\n\n\t\t\t\t\t\t*......................................*\n");
    printf("\t\t\t\t\t\t*............Book Category.............*\n");
    printf("\t\t\t\t\t\t*....         1.Online Read        ....*\n");
    printf("\t\t\t\t\t\t*....         2.Buy Now            ....*\n");
    printf("\t\t\t\t\t\t*............................. ........*\n");
    printf("\n\t\t\t\t\t\t*Enter what you want : ");
    int cho3;
    scanf("%d", &cho3);
    if (cho3 == 1)
    {
        printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....Course.....*...Author...*..Code..*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....CSE101.....*......A.....*..101...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....CSE103.....*......B.....*..103...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....CSE111.....*......C.....*..111...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\n\t\t\t\t\t\tChoose the book to read = ");
        /*       int cho4;
               scanf("%d",&cho4);
               switch(cho4)
               {
               case 1:
               {
                   cse_101();
                   break;
               }
               case 2:
               {
                   cse_103();
                   break;
               }
               case 3:
               {
                   cse_111();
                   break;
               }
               }  */
        button();
    }
    else if (cho3 == 2)
    {
        printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....Course.....*...Author...*..Code..*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....CSE101.....*......A.....*..101...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....CSE103.....*......B.....*..103...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....CSE111.....*......C.....*..111...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\n\t\t\t\t\t\tChoose the book to buy = ");
        /*      int cho5;
              scanf("%d",&cho5);
              switch(cho5)
              {
              case 1:
              {
                  payment();
                  break;
              }
              case 2:
              {
                  payment();
                  break;
              }
              case 3:
              {
                  payment();
                  break;
              }
              }  */
        button();
    }
}

int eee()
{
    system("CLS");
    printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....Course.....*...Author...*..Code..*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....EEE101.....*......A.....*..101...*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....EEE103.....*......B.....*..103...*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....EEE111.....*......C.....*..111...*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");

    printf("\n\n\n\t\t\t\t\t\t*......................................*\n");
    printf("\t\t\t\t\t\t*............Book Category.............*\n");
    printf("\t\t\t\t\t\t*....         1.Online Read        ....*\n");
    printf("\t\t\t\t\t\t*....         2.Buy Now            ....*\n");
    printf("\t\t\t\t\t\t*............................. ........*\n");
    printf("\n\t\t\t\t\t\t*Enter what you want : ");
    int cho6;
    scanf("%d", &cho6);
    if (cho6 == 1)
    {
        printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....Course.....*...Author...*..Code..*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....EEE101.....*......A.....*..101...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....EEE103.....*......B.....*..103...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....EEE111.....*......C.....*..111...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\n\t\t\t\t\t\tChoose the book to read = ");
        /*      int cho7;
             scanf("%d",&cho7);
             switch(cho7)
             {
             case 1:
             {
                 eee_101();
                 break;
             }
             case 2:
             {
                 eee_103();
                 break;
             }
             case 3:
             {
             eee_111();
                 break;
             }
             }  */
        button();
    }
    else if (cho6 == 2)
    {
        printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....Course.....*...Author...*..Code..*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....EEE101.....*......A.....*..101...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....EEE103.....*......B.....*..103...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....EEE111.....*......C.....*..111...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\n\t\t\t\t\t\tChoose the book to buy = ");
        /*      int cho8;
              scanf("%d",&cho8);
              switch(cho8)
              {
              case 1:
              {
                  payment();
                  break;
              }
              case 2:
              {
                  payment();
                  break;
              }
              case 3:
              {
                  payment();
                  break;
              }
              }  */
        button();
    }
}

int eng()
{
    system("CLS");
    printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....Course.....*...Author...*..Code..*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....ENG101.....*......A.....*..101...*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....ENG103.....*......B.....*..103...*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....ENG111.....*......C.....*..111...*\n");
    printf("\t\t\t\t\t\t*................*............*........*\n");

    printf("\n\n\n\t\t\t\t\t\t*......................................*\n");
    printf("\t\t\t\t\t\t*............Book Category.............*\n");
    printf("\t\t\t\t\t\t*....         1.Online Read        ....*\n");
    printf("\t\t\t\t\t\t*....         2.Buy Now            ....*\n");
    printf("\t\t\t\t\t\t*............................. ........*\n");
    printf("\n\t\t\t\t\t\t*Enter what you want : ");
    int cho9;
    scanf("%d", &cho9);
    if (cho9 == 1)
    {
        printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....Course.....*...Author...*..Code..*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....ENG101.....*......A.....*..101...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....ENG103.....*......B.....*..103...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....ENG111.....*......C.....*..111...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\n\t\t\t\t\t\tChoose the book to read = ");
        /*      int cho10;
             scanf("%d",&cho10);
             switch(cho10)
             {
             case 1:
             {
                 eng_101();
                 break;
             }
             case 2:
             {
                 eng_103();
                 break;
             }
             case 3:
             {
             eng_111();
                 break;
             }
             }  */
        button();
    }
    else if (cho9 == 2)
    {
        printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....Course.....*...Author...*..Code..*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....ENG101.....*......A.....*..101...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....ENG103.....*......B.....*..103...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....ENG111.....*......C.....*..111...*\n");
        printf("\t\t\t\t\t\t*................*............*........*\n");
        printf("\n\t\t\t\t\t\tChoose the book to buy = ");
        /*      int cho11;
              scanf("%d",&cho11);
              switch(cho11)
              {
              case 1:
              {
                  payment();
                  break;
              }
              case 2:
              {
                  payment();
                  break;
              }
              case 3:
              {
                  payment();
                  break;
              }
              }  */
        button();
    }
}

int math()
{
    system("CLS");
    printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
    printf("\t\t\t\t\t\t*.....Course......*...Author...*..Code..*\n");
    printf("\t\t\t\t\t\t*.................*............*........*\n");
    printf("\t\t\t\t\t\t*.....MATH101.....*......A.....*..101...*\n");
    printf("\t\t\t\t\t\t*.................*............*........*\n");
    printf("\t\t\t\t\t\t*.....MATH103.....*......B.....*..103...*\n");
    printf("\t\t\t\t\t\t*............ ....*............*........*\n");
    printf("\t\t\t\t\t\t*.....MATH111.....*......C.....*..111...*\n");
    printf("\t\t\t\t\t\t*............ ....*............*........*\n");

    printf("\n\n\n\t\t\t\t\t\t*......................................*\n");
    printf("\t\t\t\t\t\t*............Book Category.............*\n");
    printf("\t\t\t\t\t\t*....         1.Online Read        ....*\n");
    printf("\t\t\t\t\t\t*....         2.Buy Now            ....*\n");
    printf("\t\t\t\t\t\t*............................. ........*\n");
    printf("\n\t\t\t\t\t\t*Enter what you want : ");
    int cho12;
    scanf("%d", &cho12);
    if (cho12 == 1)
    {
        printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*......Course.....*...Author...*..Code..*\n");
        printf("\t\t\t\t\t\t*.................*............*........*\n");
        printf("\t\t\t\t\t\t*.....MATH101.....*......A.....*..101...*\n");
        printf("\t\t\t\t\t\t*.................*............*........*\n");
        printf("\t\t\t\t\t\t*.....MATH103.....*......B.....*..103...*\n");
        printf("\t\t\t\t\t\t*.................*............*........*\n");
        printf("\t\t\t\t\t\t*.....MATH111.....*......C.....*..111...*\n");
        printf("\t\t\t\t\t\t*.................*............*........*\n");
        printf("\n\t\t\t\t\t\tChoose the book to read = ");
        /*      int cho13;
             scanf("%d",&cho13);
             switch(cho13)
             {
             case 1:
             {
                 math_101();
                 break;
             }
             case 2:
             {
                 math_103();
                 break;
             }
             case 3:
             {
             math_111();
                 break;
             }
             }  */
        button();
    }
    else if (cho12 == 2)
    {
        printf("\n\n\n\t\t\t\t\t\t*................*............*........*\n");
        printf("\t\t\t\t\t\t*.....Course......*...Author...*..Code..*\n");
        printf("\t\t\t\t\t\t*.................*............*........*\n");
        printf("\t\t\t\t\t\t*.....MATH101.....*......A.....*..101...*\n");
        printf("\t\t\t\t\t\t*.............. ..*............*........*\n");
        printf("\t\t\t\t\t\t*.....MATH103.....*......B.....*..103...*\n");
        printf("\t\t\t\t\t\t*............ ....*............*........*\n");
        printf("\t\t\t\t\t\t*.....MATH111.....*......C.....*..111...*\n");
        printf("\t\t\t\t\t\t*............. ...*........ ...*... ....*\n");
        printf("\n\t\t\t\t\t\tChoose the book to buy = ");
        /*      int cho14;
              scanf("%d",&cho14);
              switch(cho14)
              {
              case 1:
              {
                  payment();
                  break;
              }
              case 2:
              {
                  payment();
                  break;
              }
              case 3:
              {
                  payment();
                  break;
              }
              }  */
        button();
    }
}

int e_book_list()
{
    system("CLS");
    printf("\n\n\t\t\t\t\t\t*----------------------------*\n");
    printf("\t\t\t\t\t\t*--------Book List----------*\n");
    printf("\t\t\t\t\t\t*          1.CSE            *\n");
    printf("\t\t\t\t\t\t*          2.EEE            *\n");
    printf("\t\t\t\t\t\t*          3.English        *\n");
    printf("\t\t\t\t\t\t*          4.Mathematics    *\n");
    printf("\t\t\t\t\t\t*-----------------------------*\n");

    printf("\t\t\t\t\t\tEnter what you want : ");
    int cho2;
    scanf("%d", &cho2);
    switch (cho2)
    {
    case 1:
    {
        cse();
        break;
    }
    case 2:
    {
        eee();
        break;
    }
    case 3:
    {
        eng();
        break;
    }
    case 4:
    {
        math();
        break;
    }
    }
    button();
}

int admin_dashboard()
{
    system("CLS");
    printf("\n\n\t\t\t\t\t\t*----------------------------*\n");
    printf("\t\t\t\t\t\t*--------Admin Panel----------*\n");
    printf("\t\t\t\t\t\t*     1.Edit Book List        *\n");
    printf("\t\t\t\t\t\t*     2.Add Book              *\n");
    printf("\t\t\t\t\t\t*     3.View Add Books        *\n");
    printf("\t\t\t\t\t\t*     4.Edit Search Book      *\n");
    printf("\t\t\t\t\t\t*     5.Delete Book           *\n");
    printf("\t\t\t\t\t\t*     6.Edit Read Issue       *\n");
    printf("\t\t\t\t\t\t*     7.Book Category         *\n");
    printf("\t\t\t\t\t\t*-----------------------------*\n");

    printf("\t\t\t\t\t\tEnter what you want : ");
    int cho1;
    scanf("%d", &cho1);
    switch (cho1)
    {
    case 1:
    {
        e_book_list();
        break;
    }
    case 2:
    {
        add_book();
        break;
    }

    case 3:
    {
        view_book();
        break;
    }
        /*      case 4:
               {
                   e_search_book();
                   break;
               }
               case 5:
               {
                   delete_book();
                   break;
               }
               case 6:
               {
                   e_read_issue();
                   break;
               }
               case 7:
               {
                   book_category();
                   break;
               }  */
    }
}

void admin_login()
{
    char username[50], pass[50], email[50];
    char id[50];
    FILE *file;
    file = fopen("test.txt", "r");
    struct admin_login l;
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tAdmin's User Name : ");
    scanf("%s", username);
    printf("\n\t\t\t\t\t\tAdmin's Password  : ");
    int i = 0;
    char ch;

    while (1)
    {
        ch = getch();
        if (ch == 13) //13 = ENTER
        {
            pass[i] = '\0';
            break;
        }
        else if (ch == 8) // 8 = backspace     1234  **
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }

        else
        {
            pass[i] = ch;
            i++;
            printf("*");
        }
    }
    //  '\0' not '/0'

    printf("\n\n\t\t\t\t\t\tAdmin's ID        : ");
    scanf("%s", id);

    while (fread(&l.a_id, sizeof(l), 1, file))
    {
        if (strcmp(username, l.a_username) == 0 && strcmp(pass, l.a_pass) == 0 &&
            strcmp(id, l.a_id) == 0)
        {
            printf("\n\n\n\t\t\t\t\t\t*Successful login*\n");
            printf("\n\n\t\t\t\t\t\t*Enter what you want*\n");
            printf("\t\t\t\t\t\t*Press 1 for Admin Dashboard*\n");
            int cho;
            scanf("%d", &cho);
            switch (cho)
            {
            case 1:
            {
                admin_dashboard();
                break;
            }
            }
            button();
        }
        else
        {
            printf("\n\t\t\t\tPlease enter correct Username & Password\n");
            button();
        }
    }
}
void admin_registe()
{
    FILE *file;
    file = fopen("test.txt", "w");
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

    while (1)
    {
        ch = getch();
        if (ch == 13) //13 = ENTER
        {
            l.a_pass[i] = '\0';
            break;
        }
        else if (ch == 8) // 8 = backspace     1234  **
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }

        else
        {
            l.a_pass[i] = ch;
            i++;
            printf("*");
        }
    }

    //l.a_pass[i] = '\0'; // '\0' not'/0'
    printf("\n\t\t\t\t\tEnter Admin's ID         : ");
    scanf("%s", l.a_id);
    printf("\t\t\t\t\tEnter Admin's Email      : ");
    scanf("%s", l.a_email);
    fwrite(&l, sizeof(l), 1, file);

    printf("\n\nNow login with User name & Password\n");
    printf("Press any key to continue......");
    getch();
    system("CLS");
    fclose(file);
    admin_login();
    button();
}

int add_book()
{
    FILE *file;
    file = fopen("books.txt", "ab+");
    struct book_info b;
    system("CLS");
    char Id[20], count = 0;
    printf("\n\n\t\t\t\t\t\t************* Add Book ************\n\n");
    printf("\t\t\t\t\t\t\tEnter Book ID       : ");
    scanf("%s", Id);
    rewind(file);

    while (fread(&b.Id, sizeof(b), 1, file) == 1)
    {
        if (Id == b.Id)
        {
            printf("\n\t\t\t\tThis book is already in Library....\n");
            count = 1;
        }
    }
    strcpy(b.Id, Id);
    if (count == 1)
        admin_dashboard();
    //   b.Id = Id;
    printf("\t\t\t\t\t\t\tEnter Book Name     : ");
    scanf("%s", b.name);
    printf("\t\t\t\t\t\t\tEnter Book Author   : ");
    scanf("%s", b.auth);
    printf("\t\t\t\t\t\t\tEnter Book Quantity : ");
    scanf("%d", &b.quan[i]);
    printf("\t\t\t\t\t\t\tEnter Book Rack     : ");
    scanf("%d", &b.rack[i]);
    i++;
    fseek(file, 0, SEEK_END);
    fwrite(&b, sizeof(b), 1, file);
    fclose(file);
    printf("\n\t\t\t\t\t\t* Add Book Successfully *");

    view_book();
}

int view_book()
{
    FILE *file;
    file = fopen("books.txt", "rb");
    struct book_info b;
    system("CLS");
    int count = 0;
    printf("\n\n\t\t\t\t\t*************** View Add Book ****************\n\n");
    printf("\t\t ID \t\t Name \t\t Author \t\t Quantity \t\t Rack\n\n");

    int j = 0;
    while (fread(&b, sizeof(b), 1, file) == 1)

    {

        printf("\t\t%s", b.Id);
        printf("\t\t%s", b.name);
        printf("\t\t %s", b.auth);
        printf("\t\t\t%d", b.quan[j]);
        printf("\t\t\t%d\n", b.rack[j]);

        count = count + b.quan[j];
        j++;
    }
    printf("\n\n\t\t\t\t\t\tTotal Books : %d", count);
}
//...........................user registration.......................
void user_registe()
{
    FILE *file;
    file = fopen("test.txt", "w");
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

    while (1)
    {
        ch = getch();
        if (ch == 13) //13 = ENTER
        {
            l.u_pass[i] = '\0';
            break;
        }
        else if (ch == 8) // 8 = backspace     1234  **
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }

        else
        {
            l.u_pass[i] = ch;
            i++;
            printf("*");
        }
    }
    // l.u_pass[i] = '\0';
    printf("\n\t\t\t\t\tEnter User's ID         : ");
    scanf("%d", l.u_id);
    fwrite(&l, sizeof(l), 1, file);
    fclose(file);

    printf("\n\nNow login with User name & Password\n");
    printf("Press any key to continue......");
    getch();
    system("CLS");
    user_login();
    button();
}

//...........................user login.......................
void user_login()
{
    char username[50], pass[50], id[50];
    FILE *file;
    file = fopen("test.txt", "r");
    struct user_login l;
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tUser's User Name : ");
    scanf("%s", username);
    printf("\n\t\t\t\t\t\tUser's password : ");
    int i = 0;
    char ch;

    while (1)
    {
        ch = getch();
        if (ch == 13) //13 = ENTER
        {
            pass[i] = '\0';
            break;
        }
        else if (ch == 8) // 8 = backspace     1234  **
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }

        else
        {
            pass[i] = ch;
            i++;
            printf("*");
        }
    }

    printf("\n\n\t\t\t\t\t\tUser's ID        : ");
    scanf("%s", id);
    while (fread(&l, sizeof(l), 1, file))
    {
        if (strcmp(username, l.u_username) == 0 && strcmp(pass, l.u_pass) == 0 && strcmp(id, l.u_id) == 0)
        {
            printf("\n\n\n\t\t\t\t\t\t*Successful login*\n");
            printf("\n\n\t\t\t\t\t\t*Enter what you want*\n");
            printf("\t\t\t\t\t\t*Press 1 for User Dashboard*\n");
            int cho;
            scanf("%d", &cho);
            switch (cho)
            {
            case 1:
            {
                user_dashboard();
                break;
            }
            }
            button();
        }
        else
        {
            printf("\n\t\t\t\tPlease enter correct Username & Password\n");
            button();
        }
    }
    fclose(file);
}

int user_dashboard()
{
    system("CLS");
    printf("\n\n\t\t\t\t\t\t*----------------------------*\n");
    printf("\t\t\t\t\t\t*--------User Panel----------*\n");
    printf("\t\t\t\t\t\t*     1.Book List        *\n");
    printf("\t\t\t\t\t\t*     2.View Add Books   *\n");
    printf("\t\t\t\t\t\t*     3.Search Book      *\n");
    printf("\t\t\t\t\t\t*     4.Read Issue       *\n");
    printf("\t\t\t\t\t\t*     5.Book Category    *\n");
    printf("\t\t\t\t\t\t*-----------------------------*\n");

    printf("\t\t\t\t\t\tEnter what you want : ");
    int cho15;
    scanf("%d", &cho15);
    switch (cho15)
    {
    case 1:
    {
        book_list();
        break;
    }

    case 2:
    {
        view_book();
        break;
    }
        /*  case 3:
            {
                search_book();
                break;
            }
            case 4:
            {
                read_issue();
                break;
            }
            case 5:
            {
                book_category1();
                break;
            }  */
    }
}

int book_list()
{
    system("CLS");
    printf("\n\n\t\t\t\t\t\t*----------------------------*\n");
    printf("\t\t\t\t\t\t*--------Book List----------*\n");
    printf("\t\t\t\t\t\t*          1.CSE            *\n");
    printf("\t\t\t\t\t\t*          2.EEE            *\n");
    printf("\t\t\t\t\t\t*          3.English        *\n");
    printf("\t\t\t\t\t\t*          4.Mathematics    *\n");
    printf("\t\t\t\t\t\t*-----------------------------*\n");

    printf("\t\t\t\t\t\tEnter what you want : ");
    int cho16;
    scanf("%d", &cho16);
    switch (cho16)
    {
    case 1:
    {
        cse();
        break;
    }
    case 2:
    {
        eee();
        break;
    }
    case 3:
    {
        eng();
        break;
    }
    case 4:
    {
        math();
        break;
    }
    }
    button();
}
void homepage()
{
    system("CLS");
    system("color 5b");
    printf("\n\n\n\t\t\t****************** Welcome To Our Library ******");
    printf("\n\n\n\t\t\t*********** Please Choose What You Want to select************\n");
    printf("\n\t\t\t\t*********** Press 1 for Admin ************\n");
    printf("\t\t\t\t*********** Press 2 for User *******************\n");
    printf("\t\t\t\t*********** Press 3 for Exit *******************\n");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        printf("\t1. For Admin Registration/Login\n");

        break;
    }
    case 2:
    {
        printf("\t2. For User Registration/Login\n");
        break;
    }
    case 3:
    {
        printf("\tExit\n");
        break;
    }
    }
    int n1;
    scanf("%d", &n1);
    switch (n1)
    {
    case 1:
    {
        printf("\n\n\n\t\t\t************Press 1 for Admin's registration************\n");
        printf("\n\t\t\t************Press 2 for Admin's login*******************\n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1)
        {
            system("CLS");
            admin_registe();
        }
        else if (choice == 2)
        {
            system("CLS");
            admin_login();
        }
        break;
    }
    case 2:
    {
        printf("\n\n\n\t\t\t************Press 1 for User's registration************\n");
        printf("\n\t\t\t************Press 2 for User's login*******************\n");
        int choice1;
        scanf("%d", &choice1);
        if (choice1 == 1)
        {
            system("CLS");
            user_registe();
        }
        else if (choice1 == 2)
        {
            system("CLS");
            user_login();
        }
        break;
    }
    case 3:
    {
        printf("Exit");
        break;
    }
    }
}
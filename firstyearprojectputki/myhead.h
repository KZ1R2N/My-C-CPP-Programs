
void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int display_start_menu()
{

    int counter = 1;
    char key;

    gotoxy(55, 5);
    color(12);
    printf("1.Login");

    gotoxy(55, 10);
    color(2);
    printf("2.Reigster");

    gotoxy(55, 15);
    color(2);
    printf("3.Quit");

    while (1)
    {
        key = _getch();

        if (key == 72)
        {
            if (counter == 2)
            {
                gotoxy(55, 10);
                color(2);
                printf("2.Reigster");
                gotoxy(55, 5);
                color(12);
                printf("1.Login");
                counter--;
            }
            else if (counter == 3)
            {
                gotoxy(55, 15);
                color(2);
                printf("3.Quit");
                gotoxy(55, 10);
                color(12);
                printf("2.Reigster");
                counter--;
            }
        }

        if (key == 80)
        {
            if (counter == 1)
            {
                gotoxy(55, 5);
                color(2);
                printf("1.Login");
                gotoxy(55, 10);
                color(12);
                printf("2.Reigster");
                counter++;
            }
            else if (counter == 2)
            {
                gotoxy(55, 10);
                color(2);
                printf("2.Reigster");
                gotoxy(55, 15);
                color(12);
                printf("2.Quit");
                counter++;
            }
        }

        if (key == '\r')
        {
            color(2);
            system("cls");
            return counter;
        }
    }
}

int display_quit_menu()
{
    int counter = 1;
    char key;

    gotoxy(45, 5);
    color(2);
    printf("Are you sure you want to quit?");

    gotoxy(55, 10);
    color(12);
    printf("1.YES");

    gotoxy(55, 15);
    color(2);
    printf("2.NO");

    while (1)
    {
        key = _getch();

        if (key == 72 && counter == 2)
        {
            gotoxy(55, 15);
            color(2);
            printf("2.NO");
            gotoxy(55, 10);
            color(12);
            printf("1.YES");
            counter--;
        }

        if (key == 80 && counter == 1)
        {
            gotoxy(55, 10);
            color(2);
            printf("1.YES");
            gotoxy(55, 15);
            color(12);
            printf("2.NO");
            counter++;
        }

        if (key == '\r')
        {
            color(2);
            system("cls");
            return counter;
        }
    }
}

void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds)
        ;
}

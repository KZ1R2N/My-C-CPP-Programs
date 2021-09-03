#include <stdio.h>
#include <conio.h>
#include <direct.h>
#include <stdlib.h>

int main()
{
  printf("Welcome to AArchive Quiz Game. \n");
  printf("press 1 to start the game and 0 to exit the game\n");
  int input;
  scanf("%d", &input);
  if (input)
  {
    system("cls");
    for (int i = 1 * 20; i <= 50; i++)
    {
      system("cls");

      printf("\n\n\n\n\t\t\t\t   Loading... \n\t\t");
      for (int j = 1; j <= i; j++)
        printf("|");

      printf("\n\n\t %d Percent", 2 * i);

      if (i > 1 && i < 48)

        printf("\n\n\tCreating Your Question Set: ");

      else

        printf("\n\n\tComplete. Press Enter to Continue \n");
    }
    getch();
    system("color 06");
    printf("+--------------------------------------------+-----------------------------------------+\n");
    printf("|                     Which one is vowel in these letters?                             |\n");
    printf("+--------------------------------------------+-----------------------------------------+\n");
    printf("| 1. B                                       |   2. D                                  |\n");
    printf("+--------------------------------------------+-----------------------------------------+\n");
    printf("| 3. E                                       |   4. J                                  |\n");
    printf("+--------------------------------------------+-----------------------------------------+\n");
    input = 0;
    scanf("%d", &input);
    if (input == 3)
    {
      printf("Your ans is Correct.\n");
    }
    else
    {
      system("color 04");
      printf("Your ans is incorrect.\n");
    }
  }

  printf("You Have Exited The Game\n");
}
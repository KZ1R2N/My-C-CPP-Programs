#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char letter[26], input[201];
  int test_case, i, j, value, len;

  scanf("%d", &test_case);
  getchar();
  while (test_case--)
  {
    int freq[26] = {0};
    gets(input);

    for (i = 0; i < 26; i++)
      letter[i] = 97 + i;

    len = strlen(input);

    for (i = 0; i < len; i++)
    {
      input[i] = tolower(input[i]);

      for (j = 0; j < 26; j++)
      {
        if (input[i] == letter[j])
          freq[j]++;
      }
    }

    value = -1;

    for (i = 0; i < 26; i++)
    {
      if (freq[i] > value)
        value = freq[i];
    }
    for (i = 0; i < 26; i++)
    {
      if (freq[i] == value)
        printf("%c", letter[i]);
    }
    printf("\n");
  }
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // Perform check if argc is correct or argv[1] only has alpha characters
  for (int i = 0, n = strlen(argv[1]); i < n; i++) {
    if (argc != 2 || !isalpha(argv[1][i]))
      return 1;
  }

  if (argc == 2) {
    // Ask user for input and save it to string
    char string[100];
    char keyword[100];
    printf("Please give string: ");
    scanf("%99[^\n]%*c", string);

    int j = 0; // initialize k_j
    int m = strlen(argv[1]);

    // Since 'A' = 'a' = 0 and 'Z' = 'z' = 25
    // we could aswell lowercase everything in the keyword
    for (int i = 0; i < m; i++)
    {
      keyword[i] = tolower(argv[1][i]);
    }

    for (int i = 0, n = strlen(string); i < n; i++)
    {
      if (isalpha(string[i]))
      {
        if (string[i] + keyword[j % m] - 'a' < 'z' + 1)     // 'a'= 97
        {
          printf("%c", string[i]  + keyword[j % m] - 'a' );
        }

        else 
        {
          printf("%c", (string[i]  + (keyword[j % m] - 'a')) % 'z' + ('a' - 1) );    // 'a' = 97, 'z' = 122
        }
        j++;
      }

      else
      {
        printf("%c", string[i]);
      }
    }
    return 0;
  } 
}

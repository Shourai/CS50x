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

  // Ask user for input and save it to string
  char string[100];
  char keyword[100];
  printf("Please give string: ");
  scanf("%99[^\n]%*c", string);

  int j = 0; // initialize k_j
  int m = strlen(argv[1]);

  // Since 'A' = 'a' = 0 and 'Z' = 'z' = 25
  // we could aswell lowercase everything in the keyword
  // Additionally we assign 'a' = 0 ... 'z' = 25
  for (int i = 0; i < m; i++)
  {
    keyword[i] = tolower(argv[1][i]) - 'a';
  }

  for (int i = 0, n = strlen(string); i < n; i++)
  {
    if (isalpha(string[i]))
    {
      char c = string[i] - 'a';
      printf("%c", 'a' + (c + keyword[j % m]) % 26) ;    // 'a' = 97
      j++;
    }

    else
    {
      printf("%c", string[i]);
    }
  }
  return 0;
} 

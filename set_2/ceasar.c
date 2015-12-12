#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
  if (argc == 2) 
  {
    int k = atoi(argv[1]);
    char string[100];

    printf("Please enter a string to encrypt: ");
    scanf("%99[^\n]%*c", string);

    for (int i = 0, n = strlen(string); i < n; i++)
    {
      if (isupper(string[i])) 
      {
        //char c = string[i] + k
        if (string[i] + (k % 26) > 90)
        {
          printf("%c", ((string[i] + (k % 26)) % 90 + 64));
        }
        else
        {
        printf("%c", string[i] + (k % 26));
        }
      }
      else if (islower(string[i]))
      {
        if (string[i] + (k % 26) > 122)
        {
          printf("%c", ((string[i] + (k % 26)) % 122 + 96));
        }
        else
        {
        printf("%c", string[i] + (k % 26));
        }
      }
      else
      {
        printf("%c", string[i]);
      }
    }
    return 0;
  }

  else
  {
    return 1; 
  }

}

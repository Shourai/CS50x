#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
  char name[100];
  printf("Please enter you name: ");
  scanf("%99[^\n]%*c", name);

  printf("%c", toupper(name[0]));
  for (int i = 0, n = strlen(name); i < n; i++) {
    if (name[i] == '\0' || name[i] == ' ') 
    {
      printf("%c", toupper(name[i+1]));

    }


  }

}


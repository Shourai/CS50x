#include <stdio.h>

int main(void)
{
  int input;
  printf("Please give height: ");
  scanf("%d", &input);
  
  while (input <= 0 || input > 23)
  {
    printf("Please give height between 0 and 23: ");
    scanf("%d", &input);
  }
    for(int i = 0; i < input; i++)
    {
      for(int j = input; j > i + 1; j--)
      {
        printf(" ");
      }
      for(int k = 0; k != i + 2; k++)
      {
        printf("#");
      }
      printf("\n");
    }
}


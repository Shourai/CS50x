#include <stdio.h>

int main(void)
{
  int x;
  int y;
  printf("Give me an integer: ");
  scanf("%i", &x);
  printf("Give me another integer: ");
  scanf("%i", &y);

  printf("The sum of %i and %i is %i!", x, y, x + y);
}

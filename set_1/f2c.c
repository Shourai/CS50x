#include <stdio.h>


int main(void)
{
  float fahrenheit;
  float celcius;
  printf("Temperature in F: ");
  scanf("%f", &fahrenheit);

  celcius = 5.0 / 9.0 * (fahrenheit - 32.0);

  printf("Temperature in C: %.1f", celcius);
}

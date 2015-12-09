#include <stdio.h>

int main(void)
{
  float amount;

  printf("How much change do I owe?:  ");
  scanf("%f", &amount);

  while(amount < 0)
  {
  printf("Please give a valid amount: ");
  scanf("%f", &amount);
  }

  // Convert amount to an int (from dollars to cents)
  int cents;
  cents = amount * 100;

  // Number of coins needed
  int quarters = 0;         // 25 cent
  int dimes = 0;            // 10 cent
  int nickels = 0;          // 5 cent
  int pennies = 0;          // 1 cent
  int counter = 0;          // counter for amount of coins
  
  for(; cents >= 25; cents -= 25 )
  {
    counter += 1;
    quarters += 1;
  }

  for( ; cents < 25 && cents >= 10; cents -= 10 )
  {
    counter += 1;
    dimes += 1;
  }

  for( ; cents < 10 && cents >= 5; cents -= 5 )
  {
    counter += 1;
    nickels += 1;
  }

  for( ; cents < 5 && cents > 0; cents -= 1 )
  {
    counter += 1;
    pennies += 1;
  }

  printf("Numbers of coins needed: %d \n", counter);
  printf("It consists of %d quarters, %d dimes, %d nickels, %d pennies.", quarters, dimes, nickels, pennies);
}

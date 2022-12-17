#include <stdio.h>

int main (void)
{
  // Tiek deklarētas vērtības
  int number1 = 400000;
  int number2 = 100000;

  // Liek lietotājam ievadīt skaitli 400000
  printf ("Ievadi skaitli: 400000 ");
  scanf ("%d", &number1);

  // Liek lietotājam ievadīt skaitli 100000
  printf ("Ievadi skaitli: 100000 ");
  scanf ("%d", &number2);

  // Tiek apreiķināts abu skaitļu reizinājums
  int result = number1 * number2;

  // Rezultāts tiek parādīts
  printf ("The result is: %d\n", result);

  return 0;
}


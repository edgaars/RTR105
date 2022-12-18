#include <stdio.h>
#include <string.h>

int
main (void)
{
  // Deklarē mainīgos
  int number1, number2, number3;

  // Liek lietotājam ievadīt 3 naturālos skaitļus
  printf ("Lūdzu ievadi pirmo naturālo skaitli: ");
  scanf ("%d", &number1);
  printf ("Lūdzu ievadi otro naturālo skaitli: ");
  scanf ("%d", &number2);
  printf ("Lūdzu ievadi trešo naturālo skaitli: ");
  scanf ("%d", &number3);

  // Liek lietotājam izvēlēties augošu vai dilstošu secību
  char order[10];
  printf
    ("Lūdzu izvēlies vai vēlies skaitļus sakārtot augoša vai dilstoša secībā: ");
  scanf ("%s", order);

  // Ja secība ir augoša
  if (strcmp (order, "augoša") == 0)
    {
      // Skaitļi tiek sakārtoti augošā secībā
      if (number1 > number2)
	{
	  int temp = number1;
	  number1 = number2;
	  number2 = temp;
	}
      if (number2 > number3)
	{
	  int temp = number2;
	  number2 = number3;
	  number3 = temp;
	}
      if (number1 > number2)
	{
	  int temp = number1;
	  number1 = number2;
	  number2 = temp;
	}
	// Parāda augošo secību
  printf("The sorted sequence is: %d %d %d\n", number1, number2, number3);
    }
    // Ja dilstoša secība
  else if (strcmp (order, "dilstoša") == 0)
    {
      // Skaitļi tiek sakārtoti dilstošā secībā
      if (number1 < number2)
	{
	  int temp = number1;
	  number1 = number2;
	  number2 = temp;
	}
      if (number2 < number3)
	{
	  int temp = number2;
	  number2 = number3;
	  number3 = temp;
	}
      if (number1 < number2)
	{
	  int temp = number1;
	  number1 = number2;
	  number2 = temp;
	}

      // Parāda dilstošo secību
      printf ("The sorted sequence is: %d %d %d\n", number1, number2,
	      number3);

      return 0;
    }
}



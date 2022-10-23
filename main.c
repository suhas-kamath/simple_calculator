#include <stdio.h>
#include <stdlib.h>

void
main ()
{
  while (1)
    {
      float a, b, res;

      char oper;


      printf ("enter the number a:");
      scanf ("%f", &a);
      printf ("enter the number b:");
      scanf ("%f", &b);
      printf ("enter the operator:");
      scanf (" %c", &oper);
      switch (oper)
	{
	case '+':
	  res = a + b;
	  break;

	case '-':
	  res = a - b;
	  break;

	case '/':
	  if (b == 0)
	    {
	      printf ("error");

	    }
	  else
	    res = a / b;
	  break;

	case '*':
	  res = a * b;
	  break;
	case '%':
	  if (b == 0)
	    {
	      printf ("error");

	    }
	  else
	    res = (int) a % (int) b;
	  break;
	default:
	  printf ("invalid operator");

	}
      printf ("the result is:%f\n", res);

    }
}

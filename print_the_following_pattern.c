#include<stdio.h>
int
main ()
{
  int num, i, j, k;
  scanf ("%d", &num);
  for (i = 1; i <= num; i++)
    {
      for (k = num - i; k > 0; k--)
	{
	  printf (" ");
	}
      for (j = 1; j <= 2 * i - 1; j++)
	{
	  printf ("%d", i);
	}
      printf ("
");
    }
}
#include<stdio.h>
#include<conio.h>
void
main ()
{
  int a[10];
  int sum = 0;
  for (int i = 0; i < 5; i++)
    {
      int number = 0;
      scanf ("%d", &number);
      a[i] = number;
      sum = sum + a[i];
    }

  printf ("Sum : %d", sum);
}

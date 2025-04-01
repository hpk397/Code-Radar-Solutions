#include <stdio.h>

int
main ()
{
  //Inputting the sequence
  int n;
  scanf ("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }


  int inc = 0;
  int dec = 0;
  //Checking monotonic sequence
  for (int i = 1; i < n ; i++)
    {

      if (a[i] > a[i - 1])
    {
      inc = 1;
    }
      else if (a[i] < a[i - 1])
    {
      dec = 1;
    }

    }
  if (inc == 1 && dec == 1)
    {

      printf ("NO");
    }
  else
    {

      printf ("YES");
    }

  return 0;
}
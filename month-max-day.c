#include <stdio.h>
#include <conio.h>

void main()

{
  int max, m, year;

  printf("enter the value of month and then year ");
  scanf("%d", &m);
  if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12) || (m == 2) || (m == 4) || (m == 6) || (m == 9) || (m == 11))
  
    if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))

      max = 31;

    else

        if (m == 2)
    {
      printf("enter the value of year");
      scanf("%d", &year);

      if (((year % 4) == 0 && (year % 100) != 0) || ((year % 400) == 0))

        max = 29;
      else
        max = 28;
    }

    else
      max = 30;
  

  else

    printf("you have entered wrong valued of month please write down right value of month which is actually exist");

  printf("%d", max);
}
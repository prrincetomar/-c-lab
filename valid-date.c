#include <stdio.h>

void main()
{
  int d, m, y;

  printf("d");
  scanf("%d", &d);

  if (d <= 31)

  {
    printf("value of m");
    scanf("%d", &m);
    if (m == 1 || m == 2 || m == 3 || m == 4 || m == 5 || m == 6 || m == 7 || m == 8 || m == 9 || m == 10 || m == 11 || m == 12)
    {
      if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        printf("valid ");
      else if (d <= 30)
      {
        if (m == 4 || m == 6 || m == 9 || m == 11)

          printf(" valid date ");
        else if (d <= 29)
        {

          printf("y");
          scanf("%d", &y);
          if (d == 29)

            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))

              printf("(this is a leap year)  date is valid  ");

            else

              printf("not valid year ");

          else

            printf("valid date ");
        }

        else
          printf("not valid 30th feb ");
      }
      else
        printf("not valid ");
    }
    else

      printf("not valid month ");
  }
  else
    printf("wrong day not valid");
}
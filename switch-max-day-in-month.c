#include <stdio.h>

void main()
{
  int m, y;
  printf("m");
  scanf("%d", &m);

  switch (m)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("max days is 31");
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("max days is 30");
    break;
  case 2:
    printf("y");
    scanf("%d", &y);

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
      printf("29 days ");
    else
      printf("28 days ");
    break;

  default:
    printf(" you have entered the wrong valued of month please write the right value of month ");
    break;
  }
}

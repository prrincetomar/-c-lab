#include <stdio.h>

void main ()

{
  float da, hra, gs;
  int bs;
  printf("value of bs ");
  scanf("%d", &bs);
  if (bs >= 10000)
  {
    da = 0.98 * bs;
    hra = 0.45 * bs;
    gs = bs + hra + da;
  }
  else if (bs >= 8000 && bs < 10000)
  {
    da = 0.85 * bs;
    hra = 0.3 * bs;
    gs = hra + bs + da;
  }
  else if (bs >= 6000 && bs < 8000)
  {
    da = 0.6 * bs;
    hra = 0.25 * bs;
    gs = hra + bs + da;
  }
  else if (bs >= 5000 && bs < 6000)
  {
    hra = 1200.0;
    da = 1200.0;
    gs = hra + da + bs;
  }
  else
    gs = 1.0 * bs;

  printf("%f",gs);
}
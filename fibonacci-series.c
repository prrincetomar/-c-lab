#include <stdio.h>
#include <math.h>
void main()

{
  int t, m, s = 0, c = 0, r, i, ar[1000];

  printf("m");
  scanf("%d", &m);

  for (i = 1; i < m; i++)
  {
    t = i;
    while (i > 0)
    {
      c = c + 1;
      i = i / 10;
    }

    i = t;
    while (i > 0)
    {
      r = i % 10;
      s = s + pow(r, c);
      i = i / 10;
    }
    if (t == s)
      ar[i] = s;

    printf("%d", ar[i]);
  }
}

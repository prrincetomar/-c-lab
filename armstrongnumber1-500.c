#include <stdio.h>
#include <math.h>
void main()

{
  int i, t, s, c, r, a[500];

  for (i = 1; i < 500; i++)
  {
    t = i;
    s = 0;
    c = 0;
    
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
   
    // here i = t; is mandatory  beacuse value of i is updated so it important to make it loop starting value 
    i = t;  
    if (t == s)
      a[i] = s;
    else
      a[i] = 0;
    
  }
  for (i = 1; i < 500; i++)
  {
    if (a[i] == 0)
      continue;
    printf("\n armstrong no: %d", a[i]);
  }
}

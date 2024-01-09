#include <stdio.h>

void main()
{
  int i, j, l;
  char s1[10], s2[10];

  printf("string s1 ");
  gets(s1);

  printf("string s2 ");
  gets(s2);

  i = 0;
  j = 0;
  while (s1[i] != '\0' || s2[j] != '\0')
  {
    if (s1[i] != s2[j])
      break;
    i++;
    j++;
  }
  l = s1[i] - s2[j];
  if (l == 0)
    printf(" string are same ");
  else
    printf("string are not same ");
}
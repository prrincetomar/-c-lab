#include <stdio.h>

void main ()
{
  int i,j=0 ;
  char s1[100],s2[100];

  printf("string s1:  ");
  gets(s1);
  
  for(i=0;s1[i] !='\0'; i++)
  {   s2[j]=s1[i];
      j++;
  }

s2[j]='\0';
puts(s2);

}
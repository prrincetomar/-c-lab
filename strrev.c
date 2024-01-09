#include <stdio.h>
#include <string.h>

void main ()
{
 char s1[10],s2[10];

 printf("string s1  ");
 gets(s1);
strcpy(s2,s1);

strrev(s2);

puts(s1);
puts(s2);
}
